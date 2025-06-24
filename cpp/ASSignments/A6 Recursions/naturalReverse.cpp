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
   cout<<n<<" ";
    if(n==1){

        return 0;
    }

    int K=f1(n-1);

    return K;
}
