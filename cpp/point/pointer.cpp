#include <iostream>

using namespace std;

int main() {
    int a, b;
    int *pointer1, *pointer2;
    a = 100;
    b = 10;
    pointer1 = &a;
    pointer2 = &b;

    cout << &a << "" << a << "\t" << &b << "" << b << endl;
    cout << pointer1 << "" << *pointer1 << "\t" << pointer2 << "" << *pointer2 << endl;

    return 0;
}