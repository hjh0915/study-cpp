#include <iostream>

using namespace std;

class Date;

class Time {
    public:
        Time(int h, int m, int s);
        void display(Date &d);   //友元函数

    private:
        int hour;
        int min;
        int sec;
};

class Date {
    public:
        Date(int y, int mon, int day);
        friend void Time::display(Date &d);

    private:
        int year;
        int month;
        int days;
};

Time :: Time(int h, int m, int s) {
    hour = h;
    min = m;
    sec = s;
} 

void Time::display(Date &d) {
    // cout << d.year << "/" << d.month << "/" << d.days << endl;
    // cout << hour << ":" << min << ":" << sec << endl;
    cout << d.year << "/" << d.month << "/" << d.days << "\t" 
        << hour << ":" << min << ":" << sec << endl;
}

Date :: Date(int y, int m, int day) {
    year = y;
    month = m;
    days = day;
}

int main() {
    Time t(2, 5, 33);
    Date d(2021, 11, 5);
    t.display(d);

    return 0;
}