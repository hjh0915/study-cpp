#include <iostream>

using namespace std;

void swap(int *p1, int *p2);

int main() {
    int *pointer1, *pointer2, a, b;
    cin >> a >> b;

    cout << "a = " << a << "\t" << "b = " << b << endl;

    pointer1 = &a;
    pointer2 = &b;

    // if (a < b) {}
    swap(pointer1, pointer2);

    cout << "a = " << a << "\t" << "b = " << b << endl;

    return 0;
}

void swap(int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp; 
}