#include<conio.h>
#include<stdio.h>
int sumdigit(int);
int sumdigit(int n)
{
    int r,s;
    if(n==0)
        return n;
    r=n%10;
    s=r+sumdigit(n/10);
    return s;
}
void main()
{
    int n,k;
    printf("Enter a number");
    scanf("%d",&n);
    k=sumdigit(n);
    printf("Sum of digits=%d",k);
    getch();
}
