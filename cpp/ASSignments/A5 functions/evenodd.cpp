//write a function to check whether a given number is even or odd.Return 1 if number is even, otherwise return 0.(TSRS)
#include<conio.h>
#include<iostream>
int evenodd(int);
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number:";
    cin>>x;
    int z=evenodd(x);
    cout<<z;
    getch();
}
int evenodd(int X)
{
    if(X%2==0)
        return 1;
    else
        return 0;
}
