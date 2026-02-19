#include <iostream>
using namespace std;

int main()
{
    int n = 15;
    int d = 2;

    while (n != 1)
    {
        if (n%d == 0)
        {
            cout << d << endl;
            n = n/d;
        }
        else
        {
            d+= 1;
            cout << d << endl;

        }
    }
    return 0;
}