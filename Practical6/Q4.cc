#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int number;
    int sum = 0;
    while(i < 5)
    {
        cout << "Enter a number: " << i+1<< ": ";
        cin >> number;
        i++;
        if (number > 0)
        {
            sum+= number;
        }
    }
    cout << sum;
}