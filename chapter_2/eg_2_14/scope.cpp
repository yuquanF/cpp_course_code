#include <iostream>

using namespace std;

// 定义一个全局变量
int avar;

int main() {
    int avar; // 定义局部变量
    avar = 25;
    ::avar = 10; // 通过”::“作用域访问符访问全局变量
    cout << "Local avar = " << avar << endl; // 25
    cout << "Global avar = " << ::avar << endl; // 10

    return 0;
}
/**
 * 在局部变量的作用域内，可用”：：“对被屏蔽的同名全局变量进行访问。
*/