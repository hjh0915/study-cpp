#include <iostream>

using namespace std;

int max(int a, int b, int c);
int max(int a, int b);

int main() {
    int a = 2, b = 3, c = 6;
    cout << "max_3=" << max(a, b, c) << endl;
    cout << "max_2=" << max(a, b) << endl;
}

// 函数重载，函数名可以相同，通过变量个数/变量类型进行区分
int max(int a, int b, int c) {
    if (b > a) {
        a = b;
    }
    if (c > a) {
        a = c;
    }

    return a;
}

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}