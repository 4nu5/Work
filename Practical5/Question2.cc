#include <iostream>
using namespace std;

int main()
{
    double input, positive, negative, zero;
    zero = 0;

    cout << "Enter a number: ";
    cin >> input;
    if (input > 0)
    {
        positive = input;
        cout << "Its a Positive Number: " << positive << endl;
    }
    else if (input < 0)
    {
        negative = input;
        cout << "Its a negative Number: " << negative << endl;
    }
    else
    {
        cout << "Its Zero: " << zero << endl;
    }
}