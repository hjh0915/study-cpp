#include <iostream>

using namespace std;

class Time {
    public:
        Time(int h, int m, int s);

        int hour;
        int min;
        int sec;
};

Time::Time(int h, int m, int s) {
    hour = h;
    min = m;
    sec = s;
}

void func(Time &t) {
    t.hour = 18;
}

int main() {
    Time t(10, 13, 56);
    func(t);
    cout << t.hour << endl;

    return 0;
}