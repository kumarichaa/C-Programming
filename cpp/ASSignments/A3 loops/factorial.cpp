//Write a c++ program to calculate of a number.
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int fact=1,N;
    cout<<"Enter a number";
    cin>>N;
    while(N)
    {
        fact=fact*N;
        N--;
    }
    cout<<"Factorial is "<<fact;
    getch();

}
