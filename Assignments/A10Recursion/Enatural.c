#include<conio.h>
#include<stdio.h>
int naturalE(int);
void main()
{
    int n,k;
    printf("Enter a number");
    scanf("%d",&n);
    k=naturalE(n);
    getch();
}
int naturalE(int n)
{
    int p,s=1;
    if(n==1)
    {
        printf(" %d ",2*n);
        return 1;
    }
    p=s+naturalE(n-1);
    printf(" %d ",2*p);
    return p;
}
