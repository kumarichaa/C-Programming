//write a function to find next prime number of a given number.(TSRS)
#include<conio.h>
#include<iostream>
int nextprime(int);
using namespace std;
int main()
{

    int n;
    cout<<"Enter a number:";
    cin>>n;
    int z=nextprime(n);
    getch();
}
int nextprime(int N)
{
    int i,j;
    for(i=N+1;i<=2*N;i++)
    {
       for(j=2;j<=i;j++)
       {
           if(i%j==0)
           {
               break;
           }
       }
       if(i==j)
       {
           cout<<i;
           break;
       }
    }
}
