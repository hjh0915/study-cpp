#include <iostream>

using namespace std;

class ArrayMax {
    private:
        int max;
        int a[5];

    public:
        void setArray();
        void arraymax();
        void showMax();
};

void ArrayMax::setArray() {
    int i;
    for (i=0; i<5; i++) {
        cin >> a[i];
    }
}

void ArrayMax::arraymax() {
    int i;
    max = a[0];
    for (i=0; i<5; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
}

void ArrayMax::showMax() {
    cout << "max=" << max << endl;
}

int main() {
    ArrayMax arr;

    arr.setArray();
    arr.arraymax();
    arr.showMax();

    return 0;
}