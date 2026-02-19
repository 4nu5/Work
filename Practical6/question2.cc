#include <iostream>
#include <string>
using namespace std;

int main()
{
    double temperature = 0.0;
    double average;
    string week;
    int N_week;
    int index= 0, counter=0;

    do
    {
        cout << "enter the day";
        cin >> week;
        cout << "Enter Temperature";
        cin >> temperature;
        while (week[index] != '\0')
        {
            counter++;
            index++;
             while (index > 1)
        {
            N_week++;
        }
        }
        
    } while (N_week == 7);
    cout << N_week;
    
}
