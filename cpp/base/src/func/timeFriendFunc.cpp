#include <iostream>

using namespace std;

class Date;

class Time {
    public:
        Time(int h, int m, int s);
        friend void display(Time &t, Date &d);   

    private:
        int hour;
        int min;
        int sec;
};

class Date {
    public:
        Date(int y, int mon, int day);
        friend void display(Time &t, Date &d);

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

Date :: Date(int y, int m, int day) {
    year = y;
    month = m;
    days = day;
}

void display(Time &t, Date &d) {
    cout << d.year << "/" << d.month << "/" << d.days << "\t" 
        << t.hour << ":" << t.min << ":" << t.sec << endl;
}

int main() {
    Time t(2, 5, 33);
    Date d(2021, 11, 5);
    display(t, d);

    return 0;
}