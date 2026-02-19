#include <iostream>
using namespace std;

float newSalary(float salary)
{
    cout << "Enter your current salary: ";
    float totalnewsalary;
    return totalnewsalary = (salary * 0.1);
}

int main()
{
    double salary = 0.0;
    double final_Salary = 0.0;
 
    
    final_Salary = newSalary(salary) + salary;
    cin >> salary;
    cout << "Your total increament is: " << newSalary(salary) << endl;
    cout << "Your Final Salary is: " << final_Salary << endl;

}