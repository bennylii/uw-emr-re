// test/stubs/abiword_stub.h — 仅用于语法检查的最小上游接口桩
// （声明 src/uwemr 用到的 AbiWord 2.8.6 符号，不提供实现）
// 用法: g++ -fsyntax-only -I test/stubs src/uwemr/**/*.cpp
#ifndef UWEMR_ABIWORD_STUB_H
#define UWEMR_ABIWORD_STUB_H

#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <windows.h>

#define ABI_EXPORT

typedef unsigned int UT_uint32;
typedef unsigned long UT_UCS4Char;
typedef unsigned long long UT_uintptr_t;
typedef char gchar;

// ---- UT_UTF8String / UT_UCS4String 最小桩 ----
class UT_UTF8String {
public:
    UT_UTF8String() : _p(NULL) {}
    UT_UTF8String(const char* p) : _p(p) {}
    UT_UTF8String(const UT_UTF8String& o) : _p(o._p) {}
    UT_UTF8String& operator=(const UT_UTF8String& o) { _p = o._p; return *this; }
    const char* utf8_str() const { return _p ? _p : ""; }
    operator const char*() const { return utf8_str(); }
    static UT_UTF8String fromUCS4(const UT_UCS4Char*) { return UT_UTF8String(""); }
private:
    const char* _p;
};
static inline UT_UTF8String UT_UTF8String_sFromUCS4(const UT_UCS4Char*) {
    return UT_UTF8String("");
}

class UT_UCS4String {
public:
    UT_UCS4String() : _p(NULL) {}
    UT_UCS4String(const char*) : _p(NULL) {}
    UT_UCS4String(const UT_UCS4String&) : _p(NULL) {}
    const UT_UCS4Char* ucs4_str() const { return _p; }
    static UT_UCS4String fromUCS4(const UT_UCS4Char*) { return UT_UCS4String(); }
private:
    const UT_UCS4Char* _p;
};
static inline UT_UCS4String UT_UCS4String_sFromUCS4(const UT_UCS4Char*) {
    return UT_UCS4String();
}

// ---- UT 工具 ----
inline void* UT_calloc(size_t n, size_t sz) { return calloc(n, sz); }
inline size_t UT_UCS4_strlen(const UT_UCS4Char* p) {
    size_t n = 0; while (p && p[n]) ++n; return n;
}
inline UT_UCS4Char* UT_UCS4_strcpy(UT_UCS4Char* d, const UT_UCS4Char* s) {
    return d ? (UT_UCS4Char*)memcpy(d, s, (UT_UCS4_strlen(s) + 1) * sizeof(UT_UCS4Char)) : d;
}
inline UT_UCS4Char* UT_UCS4_strncpy(UT_UCS4Char* d, const UT_UCS4Char* s, size_t n) {
    if (!d) return d; for (size_t i = 0; i < n && s[i]; ++i) d[i] = s[i]; d[n] = 0; return d;
}
inline int UT_UCS4_strcmp(const UT_UCS4Char* a, const UT_UCS4Char* b) {
    for (; a && b && *a && *b && *a == *b; ++a, ++b) {}
    return (a && b) ? (int)(*a - *b) : 0;
}

// ---- 图形 ----
struct UT_RGBColor {
    UT_RGBColor() {}
    void set(int, int, int) {}
};
struct dg_DrawArgs { int dummy; };
class GR_Graphics {
public:
    int tduX(int v) const { return v; }
    int tduY(int v) const { return v; }
    int tlu(int v) const { return v; }
    void drawLine(int, int, int, int) {}
    void drawString(const char*, int, int) {}
    void setColor(const UT_RGBColor&) {}
    void setLineWidth(int) {}
    void allCaretsNeedUpdate() {}
};

// ---- 文档/视图 ----
class PD_Document {
public:
    bool ChildWndInfo_Register(UT_uint32, UT_uint32) { return true; }
};
class FV_View {
public:
    HINSTANCE uwGetWin32AppInstance() const { return NULL; }
    HWND getWindow() const { return NULL; }
    PD_Document* getDocument() const { return NULL; }
};
class XAP_App {
public:
    static XAP_App* getApp() { return NULL; }
};

// ---- 域/运行体 ----
class fp_Run {
public:
    FV_View* _getView() const { return NULL; }
    GR_Graphics* getGraphics() const { return NULL; }
    void* _getFont() const { return NULL; }
    long getVisDirection() const { return 0; }
    int getX() const { return 0; }
    int getY() const { return 0; }
    int getWidth() const { return 0; }
    int getHeight() const { return 0; }
};
class fp_FieldRun : public fp_Run {
public:
    bool _setValue(const UT_UCS4Char*) { return true; }
};
class fd_Field {
public:
    void setValue(const char*) {}
    bool updateFragobject(void*, void*, const char*, void*, int) { return true; }
    void* getFrag() const { return NULL; }
    const UT_UCS4Char* getValueUCS4() const { return NULL; }
};

// ---- XML 骨架 ----
class UT_XML {
public:
    class Listener {
    public:
        virtual ~Listener() {}
        virtual void startElement(const gchar*, const gchar**) = 0;
        virtual void endElement(const gchar*) = 0;
        virtual void charData(const gchar*, int) = 0;
    };
};
class UT_Stringbuf {
public:
    void append(const char* s, int n) { (void)s; (void)n; }
    void append(const char* s, size_t n) { (void)s; (void)n; }
    void clear() {}
    const char* c_str() const { return ""; }
};
class UT_Vector {
public:
    bool push_back(void*) { return true; }
};

#endif // UWEMR_ABIWORD_STUB_H
