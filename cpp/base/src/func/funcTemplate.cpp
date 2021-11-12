#include <iostream>

using namespace std;

// 调用函数模板，无法使用重载
template <typename T>

T max(T a, T b, T c) {
    if (b > a) {
        a = b;
    }
    if (c > a) {
        a = c;
    }

    return a;
}

template <typename T2>

T2 max2(T2 a, T2 b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a = 2, b = 3, c = 6;
    float i = 2.3, j = 8.9, k = 4.5;
    cout << "max1=" << max(a, b, c) << endl;
    cout << "max2=" << max(i, j, k) << endl;

    cout << "max_2_1=" << max2(a, b) << endl;
    cout << "max_2_2=" << max2(i, j) << endl;
}