#include <iostream>
using namespace std;

int main()
{  
    float salary;
    cout << "Enter salary: ";
    cin >> salary;
    void new_salary();
    cout << salary;
}

void new_salary()
{
    float salary;
    salary += 1.8;
}