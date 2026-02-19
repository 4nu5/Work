#include <iostream>
using namespace std;

double F_to_C(double fahrenheit)
{
    return (fahrenheit - 32.0) * (5.0 / 9.0);    
}

double C_to_F(double celsius)
{
    return ((celsius * (9.0 / 5.0)) + 32.0);
}

int main()
{
    double temperature;
    double Converted_Temp;
    int choice;

    cout << "Enter your Temperature: ";
    cin >> temperature;

    cout << "Enter 1 for Fahrenheit to Celsius\n";
    cout << "Enter 2 for Fahrenheit to Celsius\n";
    cout << "Enter your Choice (1 or 2): ";
    cin >> choice;

    if (choice == 1)
    {
        Converted_Temp = F_to_C(temperature);
        cout << "Your temperature in Celsius is: " << Converted_Temp << endl;
    }
    else if (choice == 2)
    {
        Converted_Temp = C_to_F(temperature);
        cout << "Your temperature in Farenheit is: " << Converted_Temp << endl;
    }
    else
    {
        cout << "Invalid Choice" << endl;
    }
    return 0;

}