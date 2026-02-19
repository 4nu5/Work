#include <iostream>
using namespace std;

int main()
{
    float weight, height, BMI;
    cout << "Input your weight: ";
    cin >> weight;
    cout << "Input your height: ";
    cin >> height;
    BMI = weight / (height * height);

    if(BMI < 18.5)
    {
        cout << "Your Category is Underweight";
        cout << BMI << endl;
    }
    else if (18.5 >= BMI <= 24.9)
    {
        cout << "Your Category is Normal Weight";
        cout << BMI << endl;
    }
    else if (25 >= BMI <= 29.9)
    {
        cout << "Your Category is Overweight";
        cout << BMI << endl; 
    }
    else
    {
         cout << "YOU ARE OBESE";
         cout << BMI << endl;
    }
    return 0;
}