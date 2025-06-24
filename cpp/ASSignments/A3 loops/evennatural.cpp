//write a c++ program to print first N even natural numbers.
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int N,i;
    cout<<"Enter a number";
    cin>>N;
    for(i=1;i<=N;i++)
        cout<<2*i<<" ";
    getch();
    return 0;
}
