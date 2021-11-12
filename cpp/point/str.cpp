#include <iostream>

using namespace std;

int main() {
    char str1[] = "hello world!";
    char str2[20], *p1, *p2;
    p1 = str1;
    p2 = str2;
    for(;*p1!='\0'; p1++, p2++) {
        *p2 = *p1;
    }
    *p2 = '\0';

    cout << "st1: " << str1 << endl;
    cout << "st2: " << str2 << endl;
}