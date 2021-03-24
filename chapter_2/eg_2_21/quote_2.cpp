#include <iostream>

using namespace std;

void wrap(int &m, int &n) {
    int temp = m;
    m = n;
    n = temp;
}

int main() {
    int a = 5, b = 10;
    cout << "a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
/**
 * 引用常用于函数参数
*/