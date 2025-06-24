//Write a c++ program to reverse a number

#include<conio.h>
#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter a number:";
    cin>>n;
    int r,s=0;
    while(n){
       r=n%10;
       s=s*10+r;
       n=n/10;

    }
    cout<<"Reverse number = "<<s;
    getch();
}
