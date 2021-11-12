// 在自增（自减）运算符重载函数中，
// 增加一个int型形参，
// 就是后置自增（自减）运算符函数
#include <iostream>

using namespace std;

class Time {
    private:
        int min;
        int sec;

    public:
        Time() {
            min = 0;
            sec = 0;
        }

        Time(int m, int s):min(m), sec(s) {}

        Time operator++ ();

        Time operator++ (int);

        void display() {
            cout << min << ":" << sec << endl;
        }
};

Time Time:: operator++ () {
    if (++sec >= 60) {
        sec -= 60;
        ++min;
    }
    return *this;
}

Time Time:: operator++(int) {
    Time temp(*this);
    sec++;
    if (sec >= 60) {
        sec -= 60;
        ++min;
    }
    return temp;
}

int main() {
    Time t1(34, 59), t2;
    cout << "time1:";
    t1.display();
    ++t1;
    cout << "++time1:";
    t1.display();
    
    t2 = t1++;
    cout << "time1++:";
    t1.display();
    cout << "time2: ";
    t2.display();

    return 0;
}