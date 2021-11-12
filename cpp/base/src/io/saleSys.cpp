#include <iostream>

using namespace std;

int main() {
    float *sales, total = 0, average;
    int numDays, count;
    cout << "希望处理几天的销售量？";
    cin >> numDays;
    sales = new float[numDays];
    if (sales == NULL) {
        cout << "分配内存的空间失败\n";
        exit(0);
    } else {
        cout << "请输入如下的销售量\n";
        for (count=0; count<numDays; count++) {
            cout << "第" << (count+1) << "天：";
            cin >> sales[count];
        }
        for (count=0; count<numDays; count++) {
            total += sales[count];
        }
        average = total / numDays;
        cout.precision(2);
        //fixed是以定点形式显示浮点数，showpoint是强制显示小数点，precision是精度
        cout.setf(ios::fixed | ios::showpoint);
        cout << "\n总的销售量为：\n" << total << endl;
        cout << "平均销售量为：" << average << endl;
    }

    delete []sales;

    return 0;
}