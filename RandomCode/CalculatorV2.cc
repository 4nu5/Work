#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string operation;
    double Num1, Num2;

    cout << "Enter first number: ";
    cin >> Num1;
    cout << "Enter an operator (+, -, *, /, ^, %): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> Num2;

    if (operation== "+"){
        cout << Num1 + Num2 << endl;
    }
    else if (operation == "-"){
        cout << Num1 - Num2 << endl;
    }
    else if (operation == "*"){
        cout << Num1 * Num2 << endl;
    }
    else if (operation == "/"){
        if (Num2 != 0){
            cout << Num1 / Num2 << endl;
        }
        else {
            cout << "Error: Division by zero!" << endl;
        }
    }
    else if (operation == "^"){
        cout << pow(Num1, Num2) << endl;
    }
    else if (operation == "%"){
        if (static_cast<int>(Num2) != 0){
            cout << static_cast<int>(Num1) % static_cast<int>(Num2) << endl;
        }
        else {
            cout << "Error: Division by zero!" << endl;
        }
    }
    else {
        cout << "Error: Please Put a Valid Operator or Number" << endl;
    }
}