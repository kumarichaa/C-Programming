//write a c++ program to print first  N odd natural numbers in reverse order.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int N;
    cout<<"Enter a number";
    cin>>N;
    for(int i=1;i<=N;i++)
        cout<<2*N-2*i+1<<" ";
    getch();
}
