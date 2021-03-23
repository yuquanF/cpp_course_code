#include <iostream>

using namespace std;

int main() {
    int a = 1;

//  #define T1 a+a
//  #define T2 T1-T1
//  使用const替换 #define
    const int T1 = a+a;
    const int T2 = T1-T1;

    cout << "T2 is " << T2 << endl; // 结果是0

    return 0;
}
/**
 * const 是C++提供的一种更灵活、更安全的方式来定义常量。
 * 如：const int LIMIT = 100；
 * 这个常量LIMIT是有类型的，占用存储单元，有地址，可以用指针指向它，但不能修改它。
 *
 * =======const和指针一起使用========
 * ====1、指向常量的指针      const char* name = "feng"
 * =======是指一个指向常量的指针变量
 * =======这里不允许修改指针所指地址中的常量，例如 name[3] = 'a' 会报错
 * ====2、常指针            char* const name = "feng"
 * =======创建一个常指针，就是创建一个不能移动的固定指针，即不能改变指针所指的地址
 * ====3、指向常量的常指针    const char* const name = "feng"
 *
 *
 * 与#define相比，const定义的常量可以有自己的数据类型，这样c++编译程序可以进行更加严格的类型检查。
 * const还可以用在函数的形参上，用于保证形参在该函数内部不被改动。
*/