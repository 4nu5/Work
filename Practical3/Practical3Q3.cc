#include <iostream>
using namespace std;

int main()
{
    float cookies, totalcalories;
    int calories = 300;
    cout << "Enter cookies eaten: ";
    cin >> cookies;
    totalcalories = cookies / 10 * calories;
    cout << "calories consumed: " << totalcalories << endl;
    return 0;
}