#include <iostream>
using namespace std;

int main()
{
    int i =1;
    int j =0;

    while(j !=5)
    {
        j = 0;
        while(i != j)
        {
            cout << j + 1;
            j++;
        }
        if(i >= 5)
        break;
        cout << endl;
        i++;
    }
}