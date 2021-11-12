#include <iostream>
#include <string.h>

using namespace std;

// 动态分配内存综合应用
int main() {
    int *p;
    char *q;
    struct test{int x, y;} *r;

    p = new int(5);
    q = new char[10];
    strcpy(q, "abcde");
    r = new struct test;
    r->x = 2;
    r->y = 3;

    cout << *p << endl;
    cout << q << endl;
    cout << r->x << "\t" << r->y << endl;

    delete p;
    delete []q;
    delete r;

    return 0;
}