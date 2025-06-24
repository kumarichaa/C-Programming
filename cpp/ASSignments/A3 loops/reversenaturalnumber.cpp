// Write a c++ program to print first N natural numbers in reverse order.

#include<conio.h>
#include<iostream>
using namespace std;
int main()
{

    int N;
    cout<<"Enter a number";
    cin>>N;
    while(N)
    {
        cout<<N<<" ";
        N--;

    }
    getch();
    return 0;
}
