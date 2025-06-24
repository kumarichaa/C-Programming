//Write a c++ program to calculate x power y,where values of x and y are given by user.
#include<conio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{

    int x,y;
    cout<<"Enter two number:";
    cin>>x>>y;
    int z=pow(x,y);
    cout<<"Power = "<<z;
    getch();
}
