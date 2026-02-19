#include <iostream>
using namespace std;

int main()
{
    double salary, final, increment;

    cout << "enter salary amount: ";
    cin >> salary;
    if (salary <= 1200)
        final = salary * 0.1;

    else
        final = salary * 0.05;
        increment = final + salary;
    cout << "Current Salary: " << salary << endl;
    cout << "increament: " << final;
    cout << "\nSalary: " << increment << endl;;
} 