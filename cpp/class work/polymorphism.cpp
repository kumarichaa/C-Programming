#include<conio.h>
#include<iostream>
float area(int r);
int area(int L, int B);
using namespace std;
int main()
{
    int r;
    cout<<"Enter radius of circle:";
    cin>>r;
    float A=area(r);
    cout<<"Area of circle is "<<A<<endl;
    getch();
    int l,b;
    cout<<"Enter sides of rectangle:";
    cin>>l>>b;
    int Area=area(l,b);
    cout<<"Area of rectangle is "<<Area;
    getch();
}
float area(int r)
{
    return 3.14*r*r;
}
int area(int L, int B)
{
    return L*B;
}
