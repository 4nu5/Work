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
        cout << "Your Category is Underweight \n";
        cout << BMI << endl;
    }
    else if (BMI <= 24.9)
    {
        cout << "Your Category is Normal Weight \n";
        cout << BMI << endl;
    }
    else if (BMI <= 29.9)
    {
        cout << "Your Category is Overweight";
        cout << BMI << endl; 
    }
    else
    {
         cout << "YOU ARE OBESE \n";
         cout << BMI << endl;
    }
    return 0;
}