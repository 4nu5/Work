#include <iostream>
using namespace std;

int main()
{
    int A;
    int B;

    cout << "Enter value for A: " << endl;
    cin >> A;
    cout << "Enter value for B: " << endl;
    cin >> B;

    int sum = A + B;
    int difference = A - B;
    int product = A * B;
    int quotient = A / B;
    int remainder = A % B;

    cout << "sum = A + B = " << sum << endl;
    cout << "diff = A - B = " << difference << endl;
    cout << "multi = A * B = " << product << endl;
    cout << "div = A / B = " << quotient << endl;
    cout << "mod = A % B = " << remainder << endl;    
    return 0;
}