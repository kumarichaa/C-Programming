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
    int s=1;
    if(n==1){
        cout<<n*n<<" ";
        return 0;}
    int K=n*n+f1(n-1);
    cout<<K<<" ";
    return 0;
}
