#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size;
    cout << "Enter Number of students"<< endl;
    cin >> size;
    
    
    int test[size];
    int CW[size];
    int FE[size];
    int Pcps_total[size];
    string grade[size];
    int S_total = 0;
    int i;
    float avg = 0;

    

    for(i=0; i < size; i++)
    {
        cout<< "Enter Test Score" << i+1 << ": ";
        cin >> test[i];
        cout<< "Enter Corse Work Score" << i+1 << ": ";
        cin >> CW[i];
        cout<< "Enter Finals Score" << i+1 << ": ";
        cin >> FE[i];
    }
    for(i=0; i < size; i++)
    {
        Pcps_total[i] = CW[i] * 0.35 + test[i] * 0.35 + FE[i] * 0.30;
    }
    // for(i=0; i < size; i++)
    // {
    //     if(Pcps_total[i] < 50)
    //     {
    //         cout << "Fail";
    //     }
    //     else
    //     {
    //         cout << "Pass";
    //     }
    // }
    cout << "Student\t\t CW\t\t Test\t\t FE\t\t Total\t\t Grade" << endl;
    for(i=0; i < size; i++)
    {
        if(Pcps_total[i] <= 50)
        {
            grade[i] = "fail";
        }
        else
        {
            grade[i] = "pass";
        }
        cout << i +1 << "\t\t" << CW[i] << "\t\t" << test[i] << "\t\t" << FE[i] << "\t\t" << Pcps_total[i] << "\t\t" << grade[i] << endl;
        S_total+= Pcps_total[i];
    }
    avg = S_total/size;
    cout << "Total: " << S_total << endl;
    cout << "Average: " << avg << endl;
}