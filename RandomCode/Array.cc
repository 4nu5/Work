#include <iostream>
using namespace std;

int main()
{
    int n[10]= {32, 45,65,7,8,22,12,90,67};
    int i;
    cout << "Element\tValue\n";
    for (int i = 0; i < 10; i++)
    {
        cout << i << "\t" << n[i] << endl;
    }
}