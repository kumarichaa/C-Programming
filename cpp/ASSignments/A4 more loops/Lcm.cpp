//Write a c++ program to calculate LCM of two numbers.

#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int x,y,a,b,count=0;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    if(x>y)
    {
        for(int i=1;i<=x;i++)
        {
            a=x*i;
            for(int j=1;j<=y;j++)
            {
                b=y*j;
                if(a==b){
                    count++;
                    break;
                }
            }
            if(count==1)
                break;
        }
    }
    else{
            for(int i=1;i<=y;i++)
        {
            a=y*i;
            for(int j=1;j<=x;j++)
            {
                b=x*j;
                if(a==b){
                    count++;
                    break;
                }
            }
            if(count==1)
                break;
        }

    }
    cout<<"LCM is "<<a;
    getch();
}


