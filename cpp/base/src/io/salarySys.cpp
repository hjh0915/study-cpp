#include <iostream>

using namespace std;

void getChoice(char &letter);
double calWeeklyPay(int hours, double payRate);
double calWeeklyPay(double yearSalary);

int main() {
    char selection;
    int worked;
    double rate, yearly;    //rate：时薪，yearly：年薪

    cout << "请选择计算工资的方式：\n";
    cout << "(H)计算计时工资\n";
    cout << "(S)计算员工的工资\n";

    getChoice(selection);

    switch (selection)
    {
        case 'H':
        case 'h':
            cout << "已经工作了多少个小时？\n";
            cin >> worked;

            cout << "每小时的报酬是多少？\n";
            cin >> rate;

            cout << "毛收入：" << calWeeklyPay(worked, rate) << endl;
        break;

        case 'S':
        case 's':
            cout << "年薪为多少？\n";
            cin >> yearly;

            cout << "本周毛收入为：" << calWeeklyPay(yearly) << endl;
    
        default:
        break;
    }

    return 0;
}

// 要求用户输入字符H、h或S、s
void getChoice(char &letter) {
    do {
        cout << "请输入H或S：";
        cin >> letter;
    } while(letter!='H' && letter!='S' && letter!='h' && letter!='s');
}

// 根据时薪算毛收入
double calWeeklyPay(int hours, double payRate) {
    return hours * payRate;
}

// 根据年薪算每周毛收入
double calWeeklyPay(double yearSalary) {
    return yearSalary / 52.0;
}