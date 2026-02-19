#include <iostream>
using namespace std;

int main()
{
    double circumference, area;
    float pi = 3.142;
    int radius; 
    cout << "State radius of circle: ";
    cin >> radius;
    circumference = 2 * pi * radius;
    area = pi * radius * radius;
    cout << "circumference is " << circumference << endl;
    cout << "area is : " << area << endl;
    return 0;
}
