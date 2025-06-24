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
    getch();
}
int f1(int n)
{

   if(n<8){
    cout<<n;
    return n;
   }
   int K=f1(n/8);
   if(n%8==0)
   {
       cout<<0;
   }
   else
    cout<<n%8;
return 0;
}
