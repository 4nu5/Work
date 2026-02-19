#include <iostream>
using namespace std;

int main()
{
    char type;
    int unit;
    float charge;
    cout << "Enter type of usage (H for household, B for business): ";
    cin >> type;
    cout << "Enter amount of units: ";
    cin >> unit;

    switch(type)
    {
        case 'H':
        case 'h':
            if (unit <= 5)
            {
                charge = unit * 0.10;
            }
            else if (unit <= 10)
            {
                charge = (5 * 0.10) + (unit - 5) * 0.15;
            }
            else
            {
                charge = (5 * 0.10) + (5 * 0.15) + (unit - 10) * 0.25;
            }
            cout << "Your charge is RM " << charge << endl;
            break;
     }
     switch(type)
        {
            case 'B':
            case 'b':
                if (unit <= 5)
                {
                    charge = unit * 0.20;
                }
                else if (unit <= 10)
                {
                    charge = (5 * 0.20) + (unit - 5) * 0.25;
                }
                else
                {
                    charge = (5 * 0.20) + (5 * 0.25) + (unit - 10) * 0.35;
                }
                cout << "Your Charge is RM " << charge << endl;
                break;
            default:
                cout << "Invalid" << endl;
                break;
        }
        return 0;
}