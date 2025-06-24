//write a c++ program to check whether a given number is prime or not.


#include<conio.h>
#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter a number:";
    cin>>n;
    int i;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            break;
        }
    }
    if(i==n)
        cout<<"Prime number";
    else
        cout<<"Not prime number";
    getch();
}

