//write a c++ program to swap values of two int variables
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a= "<<a<<" and "<<"b="<<b;
    getch();
}
