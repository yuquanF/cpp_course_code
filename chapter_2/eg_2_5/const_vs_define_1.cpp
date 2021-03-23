#include <iostream>

using namespace std;

int main() {
    int a = 1;

    #define T1 a+a
    #define T2 T1-T1

    cout << "T2 is " << T2 << endl; // T2 被替换成 a+a-a+a，结果是2a=2

    return 0;
}