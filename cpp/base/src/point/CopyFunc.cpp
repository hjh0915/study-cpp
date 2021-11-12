#include <iostream>

using namespace std;

class Time {
    public:
        Time(int h, int m, int s);
        Time() {
            p = new int;
            *p = 105;
            // cout << p << "\t" << *p << endl;
        };
        Time(const Time &t);

        int hour;
        int min;
        int sec;
        int *p;
};

//复制构造函数
Time :: Time(const Time &t) {
    hour = t.hour;
    min = t.min;
    sec = t.sec;

    p = new int;
    *p = 105;
    // cout << p << "\t" << *p << endl;
}

Time::Time(int h, int m, int s) {
    hour = h;
    min = m;
    sec = s;

    p = new int;
    *p = 100;
    // cout << p << "\t" << *p << endl;
}

int main() {
    Time t1(10, 13, 56), t2;
    t2 = t1;

    cout << t1.p << "\t" << *(t1.p) << endl;
    cout << t2.p << "\t" << *(t2.p) <<  endl;

    Time t3(t1);
    cout << t1.p << "\t" << *(t1.p) << endl;
    cout << t3.p << "\t" << *(t3.p) <<  endl;

    return 0;
}