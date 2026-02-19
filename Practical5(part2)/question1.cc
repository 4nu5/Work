#include <iostream>
using namespace std;

int main()
{
    string stud_name;
    int birth_year, age;
    cout << "Enter your name: ";
    getline(cin, stud_name);
    cout << "Enter your birth year: ";
    cin >> birth_year;
    age = 2025 - birth_year;

    switch(age)
    {
        case 7:
            cout << stud_name << " is in grade 1 \nhis fees is RM 5000" << endl;
            break; 
        case 8:
            cout << stud_name << " is in grade 2 \nhis fees is RM 7500" << endl;
            break;
        case 9:
            cout << stud_name << " is in grade 3 \nhis fees is RM 9500" << endl;
            break;
        case 10:
            cout << stud_name << " is in grade 4 \nhis fees is RM 11500" << endl;
            break;
        case 11:
            cout << stud_name << " is in grade 5 \nhis fees is RM 13500" << endl;
            break;
        case 12:
            cout << stud_name << " is in grade 6 \nhis fees is RM 15500" << endl;
            break;
        default:
            cout << "Invalid age" << endl;
            break;
    }
    return 0;
}

