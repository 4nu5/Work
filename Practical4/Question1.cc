#include <iostream>
using namespace std;

int main()
{
    double length,width, area, perimeter;
    cout << "enter length: ";
    cin >> length;
    cout << "enter width:";
    cin >> width;
    area = length * width;
    perimeter = 2 * (length +width);
    cout << "Area is: " << area << endl;
    cout << "Perimeter is: " << perimeter << endl;
    return 0; 
}