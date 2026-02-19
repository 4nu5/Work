#include <iostream>
using namespace std;
void show (int x);
void area (int, int );
int main()
{
int a = 3;
int l = 6, w = 4;
show (a);
area (l,w);
}
void show (int x)
{
for(int j=0;j<=x;j++)
cout << "\n "<< x;
return;
}
void area (int x, int y)
{
cout << " \n Area is "<< x*y;
}