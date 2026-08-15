// uwemr/fields/fp_FieldCtrlEditRun.cpp — 编辑域实现（clean-room）
// License: GPL v2（研究用途）

#include "fp_FieldCtrlEditRun.h"
#include "ut_utf8string.h"
#include "ut_ucs4string.h"
#include "gr_Graphics.h"
#include "fv_View.h"

#include <windows.h>
#include <string.h>

fp_FieldCtrlEditRun::fp_FieldCtrlEditRun()
    : _pField(NULL), _pText(NULL), _bReadonly(false) {
}

fp_FieldCtrlEditRun::~fp_FieldCtrlEditRun() {
    if (_pText) { free(_pText); _pText = NULL; }
}

// DLL 调用链: UT_UTF8String 组装 → fd_Field::setValue → fp_FieldRun::_setValue
bool fp_FieldCtrlEditRun::calculateValue(void) {
    if (!_pField) return false;
    _syncFromField();
    return true;
}

void fp_FieldCtrlEditRun::_syncFromField(void) {
    if (_pText) { free(_pText); _pText = NULL; }
    const UT_UCS4Char* pV = _pField ? _pField->getValueUCS4() : NULL;
    if (pV) {
        size_t n = UT_UCS4_strlen(pV) + 1;
        _pText = (UT_UCS4Char*)UT_calloc(n, sizeof(UT_UCS4Char));
        UT_UCS4_strcpy(_pText, pV);
    }
}

void fp_FieldCtrlEditRun::uwSetText(const UT_UCS4Char* pText) {
    if (_pText) { free(_pText); _pText = NULL; }
    size_t n = UT_UCS4_strlen(pText) + 1;
    _pText = (UT_UCS4Char*)UT_calloc(n, sizeof(UT_UCS4Char));
    UT_UCS4_strcpy(_pText, pText);
    if (_pField) {
        UT_UTF8String s = UT_UTF8String_sFromUCS4(_pText);
        // 上游基类写值 + XML 片段同步
        _setValue(_pText);
        _pField->setValue(s.utf8_str());
        _pField->updateFragobject(_pField->getFrag(), NULL,
                                  s.utf8_str(), NULL, 0);
    }
}

// GDI 自绘（对应 DLL: 外部 DC API——矩形边框 + 文本）
void fp_FieldCtrlEditRun::_drawEditBox(dg_DrawArgs* pDA, int x, int y,
                                       int w, int h) {
    GR_Graphics* pG = getGraphics();
    if (!pG) return;
    // 研究骨架：绘制矩形与文本的示意实现
    pG->drawLine(x, y, x + w, y);
    pG->drawLine(x + w, y, x + w, y + h);
    pG->drawLine(x + w, y + h, x, y + h);
    pG->drawLine(x, y + h, x, y);
    if (_pText) {
        UT_UTF8String s = UT_UTF8String_sFromUCS4(_pText);
        pG->drawString(s.utf8_str(), x + 2, y + 2);
    }
}

void fp_FieldCtrlEditRun::_draw(dg_DrawArgs* pDA) {
    FV_View* pView = _getView();
    if (!pView) return;
    GR_Graphics* pG = getGraphics();
    if (!pG) return;
    _drawEditBox(pDA, pG->tduX(getX()), pG->tduY(getY()),
                 pG->tduX(getWidth()), pG->tduY(getHeight()));
}
