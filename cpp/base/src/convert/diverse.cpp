#include <iostream>

using namespace std;

void swap(int *p1, int *p2);

int main() {
    int i = 3, j = 5;
    swap(i, j);
    cout << "i=" << i << "\t" << "j=" << j << endl;

    return 0;
}

// 引用传递，将 i 和 j 取别名为 &a 和 &b
void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp; 
}