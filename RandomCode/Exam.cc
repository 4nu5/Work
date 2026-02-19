#include <iostream>
using namespace std;

void Package_A(int hours)
{
    double total;
    int add_hour;
    if (hours > 10)
    {
        add_hour = (hours - 10) * 2;
    }
    total = add_hour + 9.95;
    cout << "Your total is: " << total << endl;
}

void Package_B(int hours)
{
    double total;
    int add_hour;
    if (hours > 10)
    {
        add_hour = (hours - 20);
    }
    total = add_hour + 13.95;
    cout << "Your total is: " << total<< endl;
}

void Package_C(int hours)
{
    double total = 19.95;
    cout << "Your total is: " << total << endl;
  
}

int main()
{
    int hour;
    char package;
    string name;

    cout << "Enter your Package(A,B,C): ";
    cin >> package;
    cout << "Enter Amount of hours: ";
    cin >> hour;
    cout << "ENtwr name: ";
    cin >> name;

    switch (package)
    {
    case 'A':
    case 'a':
    {
        Package_A(hour);
        break;
    }
    case 'B':
    case 'b':
    {
        Package_B(hour);
        break;
    }
    case 'C':
    case 'c':
    {
        Package_C(hour);
        break;
    }
    default:
    {
        cout << "Invalid Input" << endl;
    }
    }
    

    
}