#include <iostream>
#define size 6
using namespace std;

int main()
{
    float bplevel[size];
    int i;
    for(i=0; i<size; i++)
    {
        cout << "Enter BP" << i+1 << ":";
        cin >> bplevel[i];
    }
    cout << "=================\n";
    cout << "Patient\t    BP Level\n";
    cout << "===================\n";

    for(i=0; i<size; i++)
    {
        cout << i+1<<"\t\t" << bplevel[i] << endl;
    }
    return 0;
}
