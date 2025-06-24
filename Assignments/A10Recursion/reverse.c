#include<conio.h>
#include<stdio.h>
int reverse(int);
int reverse(int n)
{
    int r,s=0;
    if(n==0)
        return n;
    r=n%10;
    s=s*10+r+reverse(n/10);
    return s;
}

void main()
{
    int k,n;
    printf("Enter a number");
    scanf("%d",&n);
    k=reverse(n);
    //printf("Reverse number is %d",k);
    getch();
}
