//Write a c++ program to print table of user's choice.

#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    for(int i=1;i<=10;i++)
        cout<<n<<" * "<<i<<" = "<<n*i<<"\n";
    getch();
}
