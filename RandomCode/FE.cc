#include <iostream>
using namespace std;

void room_deluxe(int);
void room_standard(int);

int main()
{
    int night, catchoice, roomchoice;

    cout << "Room category: " << endl;
    cout << "1. Standard" << endl;
    cout << "2. Deluxe" << endl;
    cout << "Enter Room Choice: ";
    cin >> catchoice;

    cout << "Enter Amount of Nights: ";
    cin >> night;

    switch(catchoice)
    {
        case 1:
        {
            room_standard(night);
            break;
        }
        case 2: 
        {
            room_deluxe(night);
            break;
        }
    }
}

void room_standard(int night)
{
    int roomchoice;
    double total;
    cout << "Room Choice: " << endl;
    cout << "1. Single Room" << endl;
    cout << "2. Double Room" << endl;
    cout << "Enter Room Choice: ";
    cin >> roomchoice;

    switch(roomchoice)
    {
        case 1:
        {
            total = 250 * night;
            cout << "Your total is: " << total << endl;
        }
        case 2: 
        {
            total = 350 * night;
            cout << "Your total is: " << total << endl;
        }

    }
}

void room_deluxe(int night)
{
    int roomchoice;
    double total;
    cout << "Room Choice: " << endl;
    cout << "1. Suite" << endl;
    cout << "2. Presidential Suite" << endl;
    cout << "Enter Room Choice: ";
    cin >> roomchoice;

    cout << "Enter Amount of Nights: ";
    cin >> night;

    switch(roomchoice)
    {
        case 1:
        {
            total = 400 * night;
            cout << "Your total is: " << total << endl;
        }
        case 2: 
        {
            total = 600 * night;
            cout << "Your total is: " << total << endl;
        }

    }
}