//Write a c++ program to print all prime number between two given numbers

#include<conio.h>
#include<iostream>
using namespace std;
int main()
{

    int x,y;
    cout<<"Enter two number:";
    cin>>x>>y;
    int i,j;
    if(x<y){
    for(i=x;i<=y;i++)
    {
       for(j=2;j<=i;j++)
       {
           if(i%j==0)
           {
               break;
           }
       }
       if(i==j){
        cout<<i<<" ";
       }
    }
    }
    else{
             for(i=y;i<=x;i++)
    {
       for(j=2;j<=i;j++)
       {
           if(i%j==0)
           {
               break;
           }
       }
       if(i==j){
        cout<<i<<" ";
       }
    }

    }

    getch();
}
