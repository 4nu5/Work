#include <iostream>
using namespace std;

int main ()
{
    int num[5] = {4, 8, 2, 7, 5};
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        num[i] = num[i] + i;
    }
    for (int i = 4; i >= 0; i--)
    {
        total = total + num[i];
        cout << num [i] << " ";
    }
    cout << endl << "Total = " << total;
    return 0;
}