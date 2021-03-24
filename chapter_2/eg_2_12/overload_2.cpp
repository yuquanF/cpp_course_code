#include <iostream>

using namespace std;

int mul(int x, int y) {
    return x * y;
}

int mul(int x, int y, int k) {
    return x * y * k;
}

int main() {
    int a = 3, b = 4, c = 5;
    cout << a << " * " << b << " = " << mul(a, b) << endl;
    cout << a << " * " << b << " * " << c << " = " << mul(a, b, c) << endl;

    return 0;
}
/**
 * 参数个数不同的重载
 *
 * 函数重载说明：
 * 1）调用重载函数时，函数返回值类型不在参数匹配检查之列。
 * 2）函数的重载与带默认值的函数一起使用时，有可能引起二义性。
 * 3）在函数调用时，如果给出的实参和形参类型不相符，c++的编译器会自动的做类型转换工作。若转换成功，则程序继续执行；否则出错。
*/