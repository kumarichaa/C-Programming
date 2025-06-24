#include<iostream>
#include<conio.h>
int f1(int);
using namespace std;
int main()
{
    int N;
    cout<<"Enter a number";
    cin>>N;
    int k=f1(N);
    cout<<k;
    getch();
}
int f1(int n)
{

    if(n==1){

        return n*n;
        }
    int s=n*n+f1(n-1);
    return s;
}
