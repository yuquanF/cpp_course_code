#include <iostream>
#include "string_tiny_STL.h"

using namespace std;

ostream &
operator<<(ostream &os, const String &str)
{
    return os << str.get_c_str();
}

int main()
{
    String s1("hello");
    String s2("world!");
    cout << s1 << " " << s2 << endl;

    String s3(s1);
    cout << s3 << endl;

    s3 = s2;
    cout << s3;

    return 0;
}