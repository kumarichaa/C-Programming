#include<conio.h>
#include<stdio.h>
int oddnatural(int);
void main()
{
    int n,k;
    printf("Enter a number");
    scanf("%d",&n);
    k=oddnatural(n);
    printf("Sum of odd numbers is %d",k);
    getch();
}
int oddnatural(int n)
{
    int s;
    if(n==1)
       return 1;
    s=2*n-1+oddnatural(n-1);
    return s;
}
