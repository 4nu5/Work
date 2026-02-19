#include <iostream>
using namespace std;

int main()
{
    int index = 0, counter = 0;
    const int size = 12;
    char IC[size];
    cout << "ENTER IC";
    cin >> IC;
    while (IC[index] != 13)
    { 
        counter++;
        index++;
    }
    if (index != 12)
    {
        cout << "ENTER VALID IC NUMBER";
    }
    cout << "YOUR IC NUMBER" << IC << endl;
}