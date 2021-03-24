#include <iostream>
#include "complex_tiny_STL.h"

using namespace std;

// 输出操作符重载
ostream &
operator<<(ostream &os, const Complex &c) {
    return os << '(' << c.real() << ", " << c.imag() << 'i' << ')' << endl;
}

int main() {

    Complex c1(2, 1);
    Complex c2(3, 7);

    cout << "c1: " << c1 << endl; // (2, 1i)
    cout << "c2: " << c2 << endl; // (3, 7i)

    cout << "c1 + c2 = " << c1 + c2 << endl; // (5, 8i)
    cout << "c1 - c2 = " << c1 - c2 << endl; // (-1, -6i)

    cout << "c1 + 2 = " << c1 + 2 << endl; // (4, 1i)
    cout << "2 + c1 = " << 2 + c1 << endl; // (4, 1i)
    cout << "c2 - 2 = " << c2 - 2 << endl; // (1, 7i)
    cout << "2 - c2 = " << 2 - c2 << endl; // (-1, 7i)

    cout << "conj(c1): " << conj(c1) << endl; // (2, -1i)
    cout << "-c1: " << -c1 << endl; // (-2, -1i)

    cout << "c1 == c2 is :" << (c1 == c2) << endl; // false
    cout << "c1 != c2 is :" << (c1 != c2) << endl; // true

    return 0;
}