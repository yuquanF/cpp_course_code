#include <iostream>

using namespace std;

int main() {
    union {
        int i;
        double d;
    } x;

    cout << "i addr: " << &x.i << ", d addr: " << &x.d << "." << endl;

    return 0;
}
/**
 * 无名联合是C++中一种特殊联合，它在union后面没有给出联合名，它可使一组数据成员共享同一内存地址。
*/