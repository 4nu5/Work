#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int counter = 0;
    int sum = 0;

    while (i <= 10)
    {
        sum += i;
        i++;
    }
    cout << sum;
    return 0;
}