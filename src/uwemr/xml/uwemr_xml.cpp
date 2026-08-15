// uwemr/xml/uwemr_xml.cpp — 病历 XML 序列化层实现骨架（clean-room）
// License: GPL v2（研究用途）

#include "uwemr_xml.h"
#include "ut_bytebuf.h"

namespace uwemr {

// ---- SAX：模板/记录 XML → 文档结构 ----
void UwEMRDocListener::startElement(const gchar* name, const gchar** atts) {
    _depth++;
    _sb.append("<", 1);
    _sb.append(name, strlen(name));
    if (atts) {
        for (int i = 0; atts[i]; i += 2) {
            _sb.append(" ", 1);
            _sb.append(atts[i], strlen(atts[i]));
            _sb.append("=\"", 2);
            _sb.append(atts[i + 1], strlen(atts[i + 1]));
            _sb.append("\"", 1);
        }
    }
    _sb.append(">", 1);
}

void UwEMRDocListener::endElement(const gchar* name) {
    _sb.append("</", 2);
    _sb.append(name, strlen(name));
    _sb.append(">", 1);
    _depth--;
}

void UwEMRDocListener::charData(const gchar* buffer, int length) {
    _sb.append(buffer, length);
}

// ---- 文档 → 病历 XML ----
UT_UTF8String UwEMRDocListener::serializeDoc(void) {
    // 骨架：遍历 PD_Document 片段树，输出元素/段落/域
    // 完整实现需复刻 DLL 的 uwSaveWordData 序列化次序（元素先于文本）
    _sb.clear();
    _sb.append("<?xml version=\"1.0\" encoding=\"UTF-8\"?>", 40);
    _sb.append("<record>", 8);
    // TODO: 遍历文档（研究骨架，按 .PIS 方言展开）
    _sb.append("</record>", 9);
    return UT_UTF8String(_sb.c_str());
}

UT_UTF8String UwEMRDocListener::serializeTemplate(const char* templId) {
    _sb.clear();
    _sb.append("<?xml version=\"1.0\" encoding=\"UTF-8\"?>", 40);
    _sb.append("<template id=\"", 14);
    _sb.append(templId, strlen(templId));
    _sb.append("\">", 2);
    _sb.append("</template>", 11);
    return UT_UTF8String(_sb.c_str());
}

// ---- 模板查询（Template_GetElemList 等）----
bool UwEMRDocListener::getElemList(UT_Vector* pOut, bool bChoiceOnly) {
    // 骨架：遍历模板 XML，收集 TemplateElem 结构
    // 对应 DLL: Template_GetElemList / Template_GetChoiceElemList
    return true;
}

bool UwEMRDocListener::getRelationship(UT_UTF8String* pOut) {
    // 对应 DLL: Template_GetRelationship（段落引用关系 XML）
    return true;
}

// ---- gzip 压缩交换（IE_Imp_GZipAbiWord）----
UT_UTF8String compressRecordXml(const UT_UTF8String& xml) {
    // 骨架：gzip 压缩病历 XML（对应 Record_CompressData 语义）
    // 实现可选 zlib gzcompress；此处返回原样（研究占位）
    return xml;
}

UT_UTF8String decompressRecordXml(const UT_UTF8String& gz) {
    // 骨架：gzip 解压
    return gz;
}

} // namespace uwemr
