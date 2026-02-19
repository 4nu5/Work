#include <iostream>
using namespace std;

float newSalary(float);

int main()
{
    double salary;
    double final_Salary;
    cout << "Enter your current salary: ";
    cin >> salary;

    final_Salary = newSalary(salary) + salary;
    cout << "Your total increament is: " << newSalary(salary) << endl;
    cout << "Your Final Salary is: " << final_Salary << endl;

}

float newSalary(float salary)
{
    float totalnewsalary;
    return totalnewsalary = (salary * 0.1);
}
