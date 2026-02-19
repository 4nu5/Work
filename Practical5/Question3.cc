#include <iostream>
using namespace std;

int main()
{
    double dividend, total;

    int share;

    cout << "Enter share amout: ";
    cin >> share;
    if (share >= 1)
    {
        dividend = 0.02;
        total = share * dividend;
        cout << "Total dividend: " << total << endl;
    }
    else if (share > 500)
    {
        dividend = 0.03;
        total = share * dividend;
        cout << "Total dividend: " << total << endl;
    }
     else if (share > 1000)
    {
        dividend = 0.03;
        total = share * dividend;
        cout << "Total dividend: " << total << endl;
    }
    else
    {
        cout << "ERROR" << endl;

    }
    return 0;
}