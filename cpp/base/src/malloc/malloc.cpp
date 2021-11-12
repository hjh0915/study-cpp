#include <iostream>

using namespace std;

int main() {
    int *p;
    p = new int(99);    //动态分配内存，将99作为初始值
    cout << *p;
    delete p;       //最后要释放分配的内存

    return 0;
}