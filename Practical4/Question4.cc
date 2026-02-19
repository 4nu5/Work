#include <iostream>
using namespace std;

int main()
{
    int birthday, year, age;

    cout << "Enter your birthyear: ";
    cin >> birthday;
    cout << "Enter current year: ";
    cin >> year;
    age = year - birthday;
    cout << "Your age is: " << age << endl;
    return 0;
}