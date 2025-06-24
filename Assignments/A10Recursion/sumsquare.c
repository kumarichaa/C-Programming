#include<conio.h>
#include<stdio.h>
int sumsquare(int);
int sumsquare(int n)
{
    int s;
    if(n==1)
        return 1;
    s=n*n+sumsquare(n-1);
    return s;
}
void main()
{
    int n,k;
    printf("Enter a number");
    scanf("%d",&n);
    k=sumsquare(n);
    printf("Sum of square is %d",k);
    getch();
}
