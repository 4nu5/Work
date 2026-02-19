#include <iostream>
using namespace std;

int main()
{
    int hours;
    char plan;
    float charge;
    cout << "Enter your plan (A, B, or C)" << endl;
    cin >> plan;
    cout << "Enter number of hours used: ";
    cin >> hours;

    switch(plan)
    {
        case 'A':
        case 'a':
            if (hours <= 10)
            {
                charge = 9.95;            
            }
            else
            {
                charge = 9.95 + ((hours - 10) * 2.00);
            }
        break;
        case 'B':
        case 'b':
            if (hours <= 20)
            {
                charge = 13.95;
            }
            else
            {
                charge = 13.95 + (hours - 20) * 1.00;
            }
            break;
        case 'C':
        case 'c':
            charge = 19.95;
            break;
        default:
            cout << "Invalid" << endl;   
    }
    cout << "Your charge is RM " << charge << endl;
    return 0;
}