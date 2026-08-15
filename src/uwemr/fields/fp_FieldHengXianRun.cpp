// uwemr/fields/fp_FieldHengXianRun.cpp — 横线域实现（clean-room）
// License: GPL v2（研究用途）

#include "fp_FieldHengXianRun.h"
#include "gr_Graphics.h"
#include "fv_View.h"

fp_FieldHengXianRun::fp_FieldHengXianRun()
    : _lineWidth(1) {
    _lineColor.set(0, 0, 0);
}

fp_FieldHengXianRun::~fp_FieldHengXianRun() {
}

// DLL: _draw → fp_Run::_getView + getGraphics + GR_Graphics::tlu（画线）
void fp_FieldHengXianRun::_draw(dg_DrawArgs* pDA) {
    FV_View* pView = _getView();
    if (!pView) return;
    GR_Graphics* pG = getGraphics();
    if (!pG) return;
    // 横线: 顶边 y+中线（如病历"姓名____"下划线）
    int x = pG->tlu(getX());
    int y = pG->tlu(getY() + getHeight() / 2);
    int w = pG->tlu(getWidth());
    pG->setLineWidth(_lineWidth);
    pG->setColor(_lineColor);
    pG->drawLine(x, y, x + w, y);
}

bool fp_FieldHengXianRun::calculateValue(void) {
    // 横线域无值语义，与上游 fp_FieldRun 默认一致
    return true;
}
