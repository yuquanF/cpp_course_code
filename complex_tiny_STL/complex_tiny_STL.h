#ifndef CPP_COURSE_CODE_COMPLEX_TINY_STL_H
#define CPP_COURSE_CODE_COMPLEX_TINY_STL_H

/**
 * 知识点概述：
 * 1 在使用未定义的函数或者变量时，需要先提前声明；
 * 2 函数内的参数传递尽量用引用，因为实际只传了地址；
 * 3 函数传参数使用引用时，对于不需要修改的，在形参前加const；
 * 4 函数内部没有修改内容时，在（）后加const；
 * 5 函数返回值能使用引用的条件是，返回的值是本来就存在的，而不是函数内部创建的。
 */

class Complex;

Complex &_doapl(Complex *ths, const Complex &c); // +=
Complex &_doami(Complex *ths, const Complex &c); // -=
Complex &_doaml(Complex *ths, const Complex &c); // *=

class Complex
{
public:
    explicit Complex(double r = 0, double i = 0) : re(r), im(i) {}
    Complex &operator+=(const Complex &);
    Complex &operator-=(const Complex &);
    Complex &operator*=(const Complex &);
    [[nodiscard]] double real() const { return re; }
    [[nodiscard]] double imag() const { return im; }

private:
    double re, im;
    friend Complex &_doapl(Complex *ths, const Complex &c);
    friend Complex &_doami(Complex *ths, const Complex &c);
    friend Complex &_doaml(Complex *ths, const Complex &c);
};

// 实现辅助计算的友元函数
inline Complex &
_doapl(Complex *ths, const Complex &c)
{
    ths->re += c.re;
    ths->im += c.im;
    return *ths;
}

inline Complex &
_doami(Complex *ths, const Complex &c)
{
    ths->re -= c.re;
    ths->im -= c.re;
    return *ths;
}

inline Complex &
_doaml(Complex *ths, const Complex &c)
{
    double f = ths->re * c.re - ths->im * c.im;
    ths->im = ths->re * c.im + ths->im * c.re;
    ths->re = f;
    return *ths;
}

// 实现成员操作符重载
inline Complex &
Complex::operator+=(const Complex &c)
{
    return _doapl(this, c);
}

inline Complex &
Complex::operator-=(const Complex &c)
{
    return _doami(this, c);
}

inline Complex &
Complex::operator*=(const Complex &c)
{
    return _doaml(this, c);
}

// 实现一些全局函数
inline double
real(const Complex &c)
{
    return c.real();
}

inline double
imag(const Complex &c)
{
    return c.imag();
}

// 实现全局操作符重载
inline Complex
operator+(const Complex &x, const Complex &y)
{
    return Complex(x.real() + y.real(), x.imag() + y.imag());
}

inline Complex
operator-(const Complex &x, const Complex &y)
{
    return Complex(x.real() - y.real(), x.imag() - y.imag());
}

inline Complex
operator+(const Complex &x, double y)
{
    return Complex(real(x) + y, imag(x));
}

inline Complex
operator-(const Complex &x, double y)
{
    return Complex(real(x) - y, imag(x));
}

inline Complex
operator+(double x, const Complex &y)
{
    return Complex(x + real(y), imag(y));
}

inline Complex
operator-(double x, const Complex &y)
{
    return Complex(x - real(y), imag(y));
}

// 取反
inline Complex
operator-(const Complex &x)
{
    return Complex(-real(x), -imag(x));
}

// 共轭
inline Complex
conj(const Complex &x)
{
    return Complex(real(x), -imag(x));
}

// 逻辑操作符重载
inline bool
operator==(const Complex &x, const Complex &y)
{
    return real(x) == real(y) && imag(x) == imag(y);
}

inline bool
operator!=(const Complex &x, const Complex &y)
{
    return real(x) != real(y) || imag(x) != imag(y);
}

#endif //CPP_COURSE_CODE_COMPLEX_TINY_STL_H
