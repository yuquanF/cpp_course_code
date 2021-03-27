#ifndef CPP_COURSE_CODE_STRING_TINY_STL_H
#define CPP_COURSE_CODE_STRING_TINY_STL_H
#include <cstring>

class String
{
public:
    explicit String(const char *cstr = nullptr);
    String(const String &str);
    String &operator=(const String &str);
    ~String();
    [[nodiscard]] char *get_c_str() const { return m_data; }

private:
    char *m_data;
};

inline
String::String(const char *cstr)
{
    if (cstr)
    {
        m_data = new char[strlen(cstr) + 1];
        strcpy(m_data, cstr);
    }
    else
    {
        m_data = new char[1];
        *m_data = '\0';
    }
}

inline
String::String(const String &str)
{
    m_data = new char[strlen(str.m_data) + 1];
    strcpy(m_data, str.m_data);
}

inline String &
String::operator=(const String &str)
{
    if (this == &str)
    {
        return *this;
    }

    delete[] m_data;
    m_data = new char[strlen(str.m_data) + 1];
    strcpy(m_data, str.m_data);
    return *this;
}

inline
String::~String()
{
    delete[] m_data;
}

#endif //CPP_COURSE_CODE_STRING_TINY_STL_H
