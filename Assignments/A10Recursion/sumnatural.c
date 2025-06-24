#include<conio.h>
#include<stdio.h>
int sumnatural(int);
void main()
{
    int n,k;
    printf("Enter a number");
    scanf("%d",&n);
    k=sumnatural(n);
    printf("sum is %d",k);
    getch();
}
int sumnatural(int n)
{
    int s;
    if(n==1)
        return 1;
    s=n+sumnatural(n-1);
    return s;
}
