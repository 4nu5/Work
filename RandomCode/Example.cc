#include <iostream>
using namespace std;

int main()
{
    int unit;
    double dis, rate = 0.0, total = 0.0, final;
    cout << "enter unit conusmed: ";
    cin >> unit;

    if (unit <= 20)
    {
        rate = unit * 0.30;

    }
    else if (unit >= 21 && unit <= 50)
    {
        rate = (unit - 20) * 0.50 + 6;

    }
    else if (unit >= 51 && unit <= 100)
    {
        rate = (unit - 50) * 0.75 + 21;

    }
    else if (unit > 100)
    {
        rate = unit * 1.00;
    }
    total = rate + 10;
    if (total >= 200)
    {
        dis = total * 0.05;
    }
    final = total - dis;
    cout << "your total bill is: " << final << endl;
    return 0;
}