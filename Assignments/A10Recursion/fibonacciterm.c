#include<stdio.h>
#include<conio.h>
int fib(int);
int fib(int n)
{
    int a=1,b=-1,t,s;
    if(n==1)
        return n;
    t=a+b;
    b=a;
    a=t;
    s=t*fib(n-1);
    return s;

}
void main()
{
    int N,k;
    printf("Enter a number");
    scanf("%d",&N);
    k=fib(N);
    printf("%d",k);
    getch();
}
