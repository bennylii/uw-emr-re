// uwemr/fields/fp_FieldHengXianRun.h/.cpp — 病历横线域控件（clean-room）
//
// 依据调用图（docs/11 §6.1）：_draw 用 GR_Graphics::tlu 画横线；
// calculateValue/needsFrequentUpdates 与上游 fp_FieldRun 同构。
// License: GPL v2（研究用途）

#ifndef UWEMR_FP_FIELD_HENGXIAN_RUN_H
#define UWEMR_FP_FIELD_HENGXIAN_RUN_H

#include "fp_FieldRun.h"

class ABI_EXPORT fp_FieldHengXianRun : public fp_FieldRun {
public:
    fp_FieldHengXianRun();
    virtual ~fp_FieldHengXianRun();

    virtual void _draw(dg_DrawArgs* pDA);
    virtual bool calculateValue(void);
    virtual UT_uint32 needsFrequentUpdates(void) { return 1; }

    // 定制：线宽/颜色
    void uwSetLineWidth(int w) { _lineWidth = w; }
    void uwSetLineColor(UT_RGBColor* c) { _lineColor = *c; }

private:
    int _lineWidth;
    UT_RGBColor _lineColor;
};

#endif // UWEMR_FP_FIELD_HENGXIAN_RUN_H
