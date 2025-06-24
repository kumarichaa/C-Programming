//write a c++ program to calculate the sum of digits in a given number.

#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,r;
    cout<<"Enter a number";
    cin>>num;
    while(num)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    cout<<" Total sum of digits are "<<sum;
    getch();
}
