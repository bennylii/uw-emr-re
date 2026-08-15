// uwemr/fields/fp_FieldCtrlRadiobuttonRun.h — 病历单选域控件（clean-room）
//
// 依据调用图反推（docs/11 §6.1）：
//   uwSetCheck:  XAP_App::getApp → UT_UTF8String 组装 → fd_Field::setValue
//                + fd_Field::updateFragobject（值→XML片段）→ uwSetValue → 重绘
//   uwSetValue:  UT_UCS4_strcpy/strncpy + fp_Run::getVisDirection/getGraphics/_getFont
//   _draw:       fp_Run::_getView + GR_Graphics::_tduX/_tduY + UT_calloc
//                + PD_Document::ChildWndInfo_Register（子窗口注册）
//   _RadiobuttonWndProc: 静态 Win32 窗口过程 → uwSetCheck
//
// 依赖: AbiWord 2.8.6 头（fp_Run/fd_Field/PD_Document/FV_View/GR_Graphics/XAP_App）
// License: GPL v2（研究用途）

#ifndef UWEMR_FP_FIELDCTRL_RADIOBUTTONRUN_H
#define UWEMR_FP_FIELDCTRL_RADIOBUTTONRUN_H

#include "fp_FieldRun.h"          // 上游: src/text/fmt/xp/fp_FieldRun.h
#include "fd_Field.h"             // 上游: src/text/fmt/xp/fd_Field.h
#include "gr_Graphics.h"          // 上游: src/af/gr/xp/gr_Graphics.h
#include "xap_App.h"              // 上游: src/af/xap/xp/xap_App.h
#include "pd_Document.h"          // 上游: src/text/ptbl/xp/pd_Document.h

#include <windows.h>

class FV_View;

// 上游 fd_Field 域对象（值承载者）
class fd_Field;

class ABI_EXPORT fp_FieldCtrlRadiobuttonRun : public fp_FieldRun {
public:
    fp_FieldCtrlRadiobuttonRun();
    virtual ~fp_FieldCtrlRadiobuttonRun();

    // ---- 上游虚函数覆盖 ----
    virtual void _draw(dg_DrawArgs* pDA);
    virtual bool calculateValue(void);
    virtual UT_uint32 needsFrequentUpdates(void) { return 1; }

    // ---- 定制业务方法（DLL 导出）----
    void uwSetCheck(bool bChecked);
    bool uwSetValue(const UT_UCS4Char* pValue);
    // DLL 为 32 位（VC6），句柄可存 UT_uint32；64 位重建时用 uintptr_t
    UT_uint32 uwGetCtrlHandle(void) const {
        return (UT_uint32)(UT_uintptr_t)_hWnd;
    }

    // ---- 值访问（供 uwGetElemValue 等上层读取）----
    const UT_UCS4Char* getCheckedValue(void) const { return _pValue; }

private:
    static LRESULT CALLBACK _RadiobuttonWndProc(HWND hWnd, UINT msg,
                                                WPARAM wParam, LPARAM lParam);
    void _createChildWindow(FV_View* pView);
    void _destroyChildWindow(void);
    void _syncToField(void);      // 值 → fd_Field（updateFragobject）
    void _syncFromField(void);    // fd_Field → 值

    fd_Field*  _pField;           // 上游域对象（XML 绑定）
    HWND       _hWnd;             // Win32 子控件
    UT_UCS4Char* _pValue;         // 当前选中值（RTL 副本）
    bool       _bChecked;
};

#endif // UWEMR_FP_FIELDCTRL_RADIOBUTTONRUN_H
