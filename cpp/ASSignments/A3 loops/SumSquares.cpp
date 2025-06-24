//write a c++ program to calculate sum of squares of first N natural numbers.

#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int sum=0,N,i;
    cout<<"Enter a number";
    cin>>N;
    for(int i=1;i<=N;i++)
        sum=sum+i*i;
    cout<<"Sum of square is "<<sum;
    getch();
}
