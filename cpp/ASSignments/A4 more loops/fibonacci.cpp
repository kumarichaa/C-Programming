//Write a c++ program to print first N fibonacci series.
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int a=1,b=-1,c=0;
    int n;
    cout<<"Enter a number:";
    cin>>n;
    while(n){
        c=a+b;
        cout<<c<<" ";
        b=a;
        a=c;
        n--;
    }
    getch();
}
