#include <iostream>

using namespace std;

void swap(int *p1, int *p2);
void exchange(int *q1, int *q2, int *q3);

int main() {
    int *p1, *p2, *p3, a, b, c;
    
    cin >> a >> b >> c;  //终端输出类似于scanf

    cout << "a = " << a << "\t" << "b = " << b << "\t" << "c = " << c << endl;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    exchange(p1, p2, p3);

    cout << "a = " << a << "\t" << "b = " << b << "\t" << "c = " << c << endl;

    return 0;
}

void exchange(int *q1, int *q2, int *q3) {
    if(*q1 > *q2) swap(q1, q2);
    if(*q1 > *q3) swap(q1, q3);
    if(*q2 > *q3) swap(q2, q3);
}

void swap(int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp; 
}