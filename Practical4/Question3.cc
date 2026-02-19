#include <iostream>
using namespace std;

int main()
{
    double temperature, celcius;

    cout << "Enter temperature in Farenheit: ";
    cin >> temperature;
    celcius = (temperature - 32) * 5/9;
    cout << "The temperature is: " << celcius << endl;
    return 0; 
}