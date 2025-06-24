//Write a c++ program to calculate sum of first N natural numbers.
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int N,sum=0;
    cout<<"Enter a number";
    cin>>N;
    for(int i=1;i<=N;i++)
        sum=sum+i;
    cout<<"Sum of "<<N<<" natural numbers are "<<sum;
    getch();
}
