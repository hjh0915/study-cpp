#include <iostream>

using namespace std;

class Time {
    public:
        void setTime();
        void showTime();

    private:
        int hour;
        int min;
        int sec;
};

void Time::setTime() {
    cin >> hour;
    cin >> min;
    cin >> sec;
}

void Time::showTime() {
    cout << hour << ":" << min << ":" << sec << endl;
}

int main() {
    Time t1, t2;
    t1.setTime();
    t1.showTime();

    t2.setTime();
    t2.showTime();

    return 0;
}