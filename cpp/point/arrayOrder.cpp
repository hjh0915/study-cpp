#include <iostream>

using namespace std;

void select_sort(int *p, int n);

int main() {
    int a[10];
    cout << "输入初始数组：";
    int i;
    for (i=0; i<10; i++) {
        cin >> a[i];
    }
    cout << endl;
    
    select_sort(a, 10);
    cout << "数组排序后：" << endl;
    for (i=0; i<10; i++) {
        cout << a[i] << "";
    }
    cout << endl;

    return 0;
}

void select_sort(int *p, int n) {
    int i, j, k, t;
    for (i=0; i<n-1; i++) {
        k = i;

        for (j=i+1; j<n; j++) {
            if(*(p+j) < *(p+k)) {
                k = j;
            }
            t = *(p+k);
            *(p+k) = *(p+t);
            *(p+t) = t;
        }
    }
}