#include <iostream>
#include <cmath>

using namespace std;

class Complex {
public:
    Complex(double r, double i) : real(r), imag(i) {}

    inline double absComplex() const;

private:
    double real, imag;
};

inline double Complex::absComplex() const {
    double t;
    t = real * real + imag * imag;
    return sqrtf(t);
}

int main() {
    Complex A(1.1, 2.2);
    cout << "the complex abs is: " << A.absComplex() << endl; // 2.45967

    auto *pa = new Complex(1.1, 2.2);
    cout << "the complex abs is: " << pa->absComplex() << endl; // 2.45967

    return 0;
}