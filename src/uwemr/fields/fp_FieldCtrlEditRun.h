// uwemr/fields/fp_FieldCtrlEditRun.h/.cpp — 病历编辑域控件（clean-room）
//
// 依据调用图（docs/11 §6.1）：
//   calculateValue: UT_UTF8String 组装 → fd_Field::setValue →
//                   fp_FieldRun::_setValue（上游基类写值）
//   _draw:          GDI 自绘（外部 DC API）
// License: GPL v2（研究用途）

#ifndef UWEMR_FP_FIELDCTRL_EDITRUN_H
#define UWEMR_FP_FIELDCTRL_EDITRUN_H

#include "fp_FieldRun.h"
#include "fd_Field.h"
#include <windows.h>

class ABI_EXPORT fp_FieldCtrlEditRun : public fp_FieldRun {
public:
    fp_FieldCtrlEditRun();
    virtual ~fp_FieldCtrlEditRun();

    virtual void _draw(dg_DrawArgs* pDA);
    virtual bool calculateValue(void);

    // 定制业务方法
    void uwSetText(const UT_UCS4Char* pText);
    const UT_UCS4Char* uwGetText(void) const { return _pText; }
    void uwSetReadonly(bool bRo) { _bReadonly = bRo; }
    bool uwIsReadonly(void) const { return _bReadonly; }

private:
    void _syncFromField(void);   // fd_Field → 本地缓存
    fd_Field*      _pField;
    UT_UCS4Char*   _pText;
    bool           _bReadonly;
    // GDI 自绘相关（DLL 中 _draw 走 DC 直接绘制）
    void _drawEditBox(dg_DrawArgs* pDA, int x, int y, int w, int h);
};

#endif // UWEMR_FP_FIELDCTRL_EDITRUN_H
