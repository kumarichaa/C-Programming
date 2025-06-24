//write a function to print first N terms of fibonacci series.(TSRN)
#include<conio.h>
#include<iostream>
void fibonacci(int);
using namespace std;
int main()
{

    int n;
    cout<<"Enter a number:";
    cin>>n;
    fibonacci(n);
    getch();
}
void fibonacci(int N)
{
     int a=1,b=-1,c=0;
    while(N){
        c=a+b;
        cout<<c<<" ";
        b=a;
        a=c;
        N--;
}
}
