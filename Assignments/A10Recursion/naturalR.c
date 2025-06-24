#include<conio.h>
#include<stdio.h>
int naturalR(int);
void main()
{
    int n,k;
    printf("Enter a number");
    scanf("%d",&n);
    k=naturalR(n);
    getch();
}
int naturalR(int n)
{
    int p;
    if(n==1)
    {
        printf(" %d ",n);
        return 1;
    }
    printf(" %d ",n);
    p=naturalR(n-1);
    return p;
}
