//Write a c++ program to calculate average of three numbers.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    int s=a+b+c;
    float A=s/3.0;
    cout<<"Average of "<<a<<","<<b<<" and "<<c<<" is "<<A;
    getch();
}
