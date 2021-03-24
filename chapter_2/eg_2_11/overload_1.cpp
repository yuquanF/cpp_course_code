#include <iostream>

using namespace std;

int square(int i) {
    return i * i;
}

long square(long i) {
    return i * i;
}

double square(double i) {
    return i * i;
}

int main() {
    int i = 12;
    long l = 1234;
    double d = 5.67;
    cout << i << " * " << i << " = " << square(i) << endl;
    cout << l << " * " << l << " = " << square(l) << endl;
    cout << d << " * " << d << " = " << square(d) << endl;

    return 0;
}
/**
 * 参数类型不同的重载
*/