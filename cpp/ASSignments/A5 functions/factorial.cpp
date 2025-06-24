//write a function to factorial of a number.(TSRS)
#include<conio.h>
#include<iostream>
int factorial(int);
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number:";
    cin>>x;
    int z=factorial(x);
    cout<<z;
    getch();
}
int factorial(int X)
{
    int f=1;
    while(X)
    {
        f=f*X;
        X--;
    }
}
