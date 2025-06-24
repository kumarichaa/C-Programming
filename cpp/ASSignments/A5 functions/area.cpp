//write a function to calculate area of circle.(TSRS)
#include<iostream>
#include<conio.h>
float area(int);
using namespace std;
int main()
{
    int r;
    cout<<"Enter a number";
    cin>>r;
    float A=area(r);
    cout<<A;
    getch();
}
float area(int R)
{
    return 3.14*R*R;
}
