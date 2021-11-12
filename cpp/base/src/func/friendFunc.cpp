#include <iostream>

using namespace std;

class Time {
    public:
        Time(int h, int m, int s);
        friend void display(Time &t);   //友元函数

    private:
        int hour;
        int min;
        int sec;
};

Time :: Time(int h, int m, int s) {
    hour = h;
    min = m;
    sec = s;
} 

void display(Time &t) {
    cout << t.hour << ":" << t.min << ":" << t.sec << endl;     //不能直接访问
}

int main() {
    Time t(2, 5, 33);
    display(t);

    return 0;
}