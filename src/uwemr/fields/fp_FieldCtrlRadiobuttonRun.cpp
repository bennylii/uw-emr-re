// uwemr/fields/fp_FieldCtrlRadiobuttonRun.cpp — 单选域控件实现（clean-room）
//
// 实现逻辑按 docs/11 §6.1 调用图重建：
//   uwSetCheck → _syncToField（fd_Field::setValue + updateFragobject）→ uwSetValue
//   _draw → GR_Graphics::_tduX/_tduY 定位 + ChildWndInfo_Register 登记
//   _RadiobuttonWndProc → BM_CLICK/WM_LBUTTONUP 触发 uwSetCheck
// License: GPL v2（研究用途）

#include "fp_FieldCtrlRadiobuttonRun.h"
#include "fv_View.h"            // FV_View::uwGetWin32AppInstance
#include "pd_Document.h"        // PD_Document::ChildWndInfo_Register
#include "ut_utf8string.h"      // UT_UTF8String
#include "ut_ucs4string.h"      // UT_UCS4String
#include "xap_App.h"

#include <windows.h>
#include <string.h>

fp_FieldCtrlRadiobuttonRun::fp_FieldCtrlRadiobuttonRun()
    : _pField(NULL), _hWnd(NULL), _pValue(NULL), _bChecked(false) {
}

fp_FieldCtrlRadiobuttonRun::~fp_FieldCtrlRadiobuttonRun() {
    _destroyChildWindow();
    if (_pValue) {
        free(_pValue);
        _pValue = NULL;
    }
}

// 子窗口过程：DLL 中为静态函数（_RadiobuttonWndProc），经 GetWindowLongPtr
// 取回 this 后转 uwSetCheck。
LRESULT CALLBACK fp_FieldCtrlRadiobuttonRun::_RadiobuttonWndProc(
    HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    fp_FieldCtrlRadiobuttonRun* pThis =
        reinterpret_cast<fp_FieldCtrlRadiobuttonRun*>(
            GetWindowLongPtrW(hWnd, GWLP_USERDATA));
    if (!pThis) return DefWindowProcW(hWnd, msg, wParam, lParam);
    switch (msg) {
    case WM_LBUTTONUP:
        pThis->uwSetCheck(true);       // 选中本项
        return 0;
    case WM_KEYDOWN:
        if (wParam == VK_SPACE) {
            pThis->uwSetCheck(true);
            return 0;
        }
        break;
    default:
        break;
    }
    return DefWindowProcW(hWnd, msg, wParam, lParam);
}

// 值 → 上游域对象（XML 双向绑定核心）
void fp_FieldCtrlRadiobuttonRun::_syncToField(void) {
    if (!_pField || !_pValue) return;
    UT_UTF8String sValue = UT_UTF8String_sFromUCS4(_pValue);
    // fd_Field::setValue 更新域值；updateFragobject 把值写回文档 XML 片段
    _pField->setValue(sValue.utf8_str());
    _pField->updateFragobject(_pField->getFrag(),
                              NULL, sValue.utf8_str(), NULL, 0);
}

void fp_FieldCtrlRadiobuttonRun::_syncFromField(void) {
    if (!_pField) return;
    if (_pValue) { free(_pValue); _pValue = NULL; }
    const UT_UCS4Char* pV = _pField->getValueUCS4();
    if (pV) {
        size_t n = UT_UCS4_strlen(pV) + 1;
        _pValue = (UT_UCS4Char*)UT_calloc(n, sizeof(UT_UCS4Char));
        UT_UCS4_strcpy(_pValue, pV);
    }
    static const UT_UCS4Char ONE[] = { '1', 0 };
    _bChecked = (_pValue && UT_UCS4_strcmp(_pValue, ONE) == 0);
}

void fp_FieldCtrlRadiobuttonRun::uwSetCheck(bool bChecked) {
    _bChecked = bChecked;
    // 组装"1"/"0" 并走统一写值路径
    static const UT_UCS4Char ONE[] = { '1', 0 };
    static const UT_UCS4Char ZERO[] = { '0', 0 };
    uwSetValue(bChecked ? ONE : ZERO);
}

bool fp_FieldCtrlRadiobuttonRun::uwSetValue(const UT_UCS4Char* pValue) {
    if (_pValue) { free(_pValue); _pValue = NULL; }
    size_t n = UT_UCS4_strlen(pValue) + 1;
    _pValue = (UT_UCS4Char*)UT_calloc(n, sizeof(UT_UCS4Char));
    UT_UCS4_strncpy(_pValue, pValue, n - 1);
    _syncToField();
    // 重绘：经视图取字体/图形上下文（对应 DLL 中 getVisDirection/
    // getGraphics/_getFont 序列）
    FV_View* pView = _getView();
    if (pView) {
        GR_Graphics* pG = getGraphics();
        if (pG) pG->allCaretsNeedUpdate();
    }
    return true;
}

void fp_FieldCtrlRadiobuttonRun::_createChildWindow(FV_View* pView) {
    if (_hWnd) return;
    // 对应 DLL: uwGetWin32AppInstance（GetModuleHandle）+ 子窗口注册
    HINSTANCE hInst = pView ? pView->uwGetWin32AppInstance() :
                              GetModuleHandleW(NULL);
    HWND hParent = pView ? pView->getWindow() : NULL;
    _hWnd = CreateWindowExW(0, L"BUTTON", L"",
                            WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON,
                            0, 0, 0, 0, hParent, NULL, hInst, NULL);
    if (_hWnd) {
        SetWindowLongPtrW(_hWnd, GWLP_USERDATA,
                          reinterpret_cast<LONG_PTR>(this));
        SetWindowLongPtrW(_hWnd, GWLP_WNDPROC,
                          reinterpret_cast<LONG_PTR>(_RadiobuttonWndProc));
        // DLL 中 _draw 调用 PD_Document::ChildWndInfo_Register 登记
        if (pView) {
            PD_Document* pDoc = pView->getDocument();
            if (pDoc) {
                pDoc->ChildWndInfo_Register(
                    (UT_uint32)(UT_uintptr_t)_hWnd,
                    (UT_uint32)(UT_uintptr_t)this);
            }
        }
    }
}

void fp_FieldCtrlRadiobuttonRun::_destroyChildWindow(void) {
    if (_hWnd) { DestroyWindow(_hWnd); _hWnd = NULL; }
}

void fp_FieldCtrlRadiobuttonRun::_draw(dg_DrawArgs* pDA) {
    // 对应 DLL: _getView + GR_Graphics::_tduX/_tduY 坐标换算 + _createChildWindow
    FV_View* pView = _getView();
    if (!pView) return;
    GR_Graphics* pG = getGraphics();
    if (!pG) return;
    _createChildWindow(pView);
    if (!_hWnd) return;
    // 由视图像素位置换算逻辑单位
    int x = pG->tduX(getX());
    int y = pG->tduY(getY());
    int w = pG->tduX(getWidth());
    int h = pG->tduY(getHeight());
    SetWindowPos(_hWnd, NULL, x, y, w, h,
                 SWP_NOZORDER | SWP_NOACTIVATE);
    SendMessageW(_hWnd, BM_SETCHECK, _bChecked ? BST_CHECKED : BST_UNCHECKED, 0);
}

bool fp_FieldCtrlRadiobuttonRun::calculateValue(void) {
    _syncFromField();
    return _bChecked;
}
