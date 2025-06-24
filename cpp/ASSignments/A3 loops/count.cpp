//Write a c++ program to count digits in a given number
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int num,count=0,r;
    cout<<"Enter a number";
    cin>>num;
    while(num)
    {
        r=num%10;
        count++;
        num=num/10;
    }
    cout<<"Total count is "<<count;
getch();
return 0;
}
