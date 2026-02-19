#include <iostream>
using namespace std;

int main()
{
    double temperature, sum = 0, avg;
    int i = 0;
    while (i < 7)
    {
        cout << "Enter Temperature: " << i+1 << ": ";
        cin >> temperature;
        sum += temperature;
        i++;
    }
    avg = sum/7;
    cout << "Total: "<<sum << endl;
    printf("avg: %.2f", avg);
    return 0;
}