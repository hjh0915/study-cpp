#include <iostream>

using namespace std;

int add(int *x, int *y);

int main() {
    int a = 2, b = 3;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;

    cout << add(p1, p2) << endl;
}

int add(int *x, int *y) {
    int w, z;
    w = *x;
    z = *y;
    return w + z;
}