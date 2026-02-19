#include <iostream>
using namespace std;

int main ()
{
    float rating, feedback, score;
    cout<< "Enter rating: ";
    cin >> rating;
    cout << "Enter feedback: ";
    cin >> feedback;
    score = rating * 0.4 + feedback * 0.6;
    cout << "Score is : " << score << endl;
    return 0;
}