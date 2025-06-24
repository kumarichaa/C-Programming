//Write a c++ program to calculate simple interest.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int p,r,t;
    cout<<"Enter principal";
    cin>>p;
    cout<<"Enter rate";
    cin>>r;
    cout<<"Enter time";
    cin>>t;
    int s=p*r*t;
    int s_i=s/100;
    cout<<"Simple interest is "<<s_i;
    getch();
}
