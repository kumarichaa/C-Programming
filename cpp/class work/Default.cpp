#include<conio.h>
#include<iostream>
int add(int x, int y=0,int z=0);
using namespace std;
int main()
{
    int a,b,f;
    cout<<"Enter two numbers:";
    cin>>a>>b>>f;
    int c=add(a,b,f);
    cout<<"sum = "<<c;
    cout<<endl;
    int d=add(a);
    cout<<"sum = "<<d;
     cout<<endl;
    int e=add(a,b);
    cout<<"sum = "<<e;
    getch();



}
int add(int x, int y ,int z)
{
    return x+y+z;
}
