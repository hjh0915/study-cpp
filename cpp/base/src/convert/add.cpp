#include <iostream>

using namespace std;

int add(int a, int b, int c);
int add(int a, int b);

int main() {
    int a = 2, b = 3, c = 6;
    cout << "add_3=" << add(a, b, c) << endl;
    cout << "add_2=" << add(a, b) << endl;
}

// 函数重载
int add(int a, int b, int c) {
    return a + b + c;
}

int add(int a, int b) {
    return a + b;
}