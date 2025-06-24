#include<conio.h>
#include<stdio.h>
int sumE(int);
void main()
{
    int n,k;
    printf("Enter a number");
    scanf("%d",&n);
    k=sumE(n);
    printf("Sum of even number is %d",k);
    getch();
}
int sumE(int n)
{
    int s;
    if(n==1)
        return 2;
    s=2*n+sumE(n-1);
    return s;
}
