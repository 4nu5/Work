#include <iostream>
using namespace std;

int main()
{
    double length, width, height, volume;
    cout << "enter length: ";
    cin >> length;
    cout << "enter width: ";
    cin >> width;
    cout << "enter height: ";
    cin >> height;
    volume = length * width * height;
    cout << "Total volume is: " << volume << endl;
    return 0; 
}