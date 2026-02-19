#include <iostream>
using namespace std;

void room_deluxe(int night, int roomchoice);
void room_standard(int night, int roomchoice);

int main()
{
    int night, catchoice, roomchoice;

    cout << "Room category: " << endl;
    cout << "1. Standard" << endl;
    cout << "2. Deluxe" << endl;
    cout << "Enter Room Choice: ";
    cin >> catchoice;

    if(catchoice == 1)
    {
        cout << "Room Choice: " << endl;
        cout << "1. Single Room" << endl;
        cout << "2. Double Room" << endl;
        cout << "Enter Room Choice: ";
        cin >> roomchoice;
    }
    else if(catchoice == 2)
    {
        cout << "Room Choice: " << endl;
        cout << "1. Regular Suite" << endl;
        cout << "2. Presidential suite" << endl;
        cout << "Enter Room Choice: ";
        cin >> roomchoice;
    }
    

    cout << "Enter Amount of Nights: ";
    cin >> night;

    switch(catchoice)
    {
        case 1:
        {
            room_standard(night, roomchoice);
            break;
        }
        case 2: 
        {
            room_deluxe(night, roomchoice);
            break;
        }
    }
}

void room_standard(int night, int roomchoice)
{
    double total;

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

void room_deluxe(int night, int roomchoice)
{
    double total;

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