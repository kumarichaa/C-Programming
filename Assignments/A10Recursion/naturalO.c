#include<conio.h>
#include<stdio.h>
int naturalO(int);
void main()
{
    int n,k;
    printf("Enter a number");
    scanf("%d",&n);
    k=naturalO(n);
    getch();
}
int naturalO(int n)
{
    int s=1,p;
    if(n==1)
    {
        printf(" %d ",n);
        return 1;
    }
    p=s+naturalO(n-1);
    printf(" %d ",2*p-1);
    return p;
}
