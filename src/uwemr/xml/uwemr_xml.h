// uwemr/xml/uwemr_xml.h — 病历 XML 序列化层（clean-room 骨架）
//
// 依据调用图（docs/11 §6.3）：模板/记录 API = 上游 UT_XML SAX +
// 自定义 Listener（startElement/endElement）+ UT_Stringbuf 文本流。
// 病历 XML 方言（元素/段落/域）由 .PIS 模板实证，此处定义骨架结构。
// License: GPL v2（研究用途）

#ifndef UWEMR_XML_H
#define UWEMR_XML_H

#include "ut_xml.h"              // 上游 SAX 框架
#include "ut_stringbuf.h"        // 上游文本缓冲
#include "ut_utf8string.h"
#include "pd_Document.h"
#include "fp_Run.h"

namespace uwemr {

// ---- 病历 XML 元素类型（.PIS 模板方言）----
enum ElemType {
    ELEM_DOC,        // 文档
    ELEM_PARA,       // 段落
    ELEM_TEXT,       // 文本
    ELEM_FIELD,      // 域（fd_Field 系列）
    ELEM_RADIO,      // 单选域
    ELEM_EDIT,       // 编辑域
    ELEM_HENGXIAN,   // 横线域
    ELEM_TABLE,      // 表格
    ELEM_CELL,
    ELEM_IMG,        // 图片（签名照片）
    ELEM_SIGN,       // 签名
    ELEM_RELATION    // 段落引用关系
};

// 模板元素描述（Template_GetElemList 等返回的结构）
struct TemplateElem {
    UT_UTF8String   name;        // 元素名（XML 标签）
    ElemType        type;
    UT_UTF8String   caption;     // 显示名
    bool            required;    // 必填
    UT_UTF8String   defaultValue;
    UT_UTF8String   choiceList;  // 选项（单选域）
};

// 模板/记录 SAX Listener：文档 XML → PD_Document 与反向
// （对应 DLL 中自定义 Listener，与 IE_Imp_XML 同构）
class UwEMRDocListener : public UT_XML::Listener {
public:
    UwEMRDocListener(PD_Document* pDoc) : _pDoc(pDoc), _depth(0) {}

    // UT_XML::Listener
    virtual void startElement(const gchar* name, const gchar** atts);
    virtual void endElement(const gchar* name);
    virtual void charData(const gchar* buffer, int length);

    // 序列化：文档 → 病历 XML 文本
    UT_UTF8String serializeDoc(void);
    UT_UTF8String serializeTemplate(const char* templId);

    // 查询（对应 Template_GetElemList 等）
    bool getElemList(UT_Vector* pOut, bool bChoiceOnly);
    bool getRelationship(UT_UTF8String* pOut);

private:
    PD_Document* _pDoc;
    int _depth;
    UT_Stringbuf _sb;            // 文本流组装
};

// gzip 病历交换（对应 IE_Imp_GZipAbiWord / Record_CompressData）
UT_UTF8String compressRecordXml(const UT_UTF8String& xml);
UT_UTF8String decompressRecordXml(const UT_UTF8String& gz);

} // namespace uwemr

#endif // UWEMR_XML_H
