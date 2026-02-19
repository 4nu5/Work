#include <iostream>
using namespace std;

int main()
{
    int size = 9;
    int total_g[size];
    char grade[size];
    int i;

    for(i = 0; i < size; i++)
    {
        cout << "enter your grade for student " << i + 1 << ": ";
        cin >> grade[i];
    }
    for (i = 0; i < size; i++)
    {
        cout << i+1 << grade[i] << endl;
    }

}