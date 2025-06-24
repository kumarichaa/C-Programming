//write a c++ program to calculate volume of cuboid.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int l,b,h;
    cout<<"Enter length,breathe and height";
    cin>>l>>b>>h;
    int v=l*b*h;
    cout<<"Volume of cuboid is "<<v;
    getch();
}
