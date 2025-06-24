#include<conio.h>
#include<stdio.h>
int naturalOR(int);
void main()
{
    int k,n;
    printf("Enter a number");
    scanf("%d",&n);
    k=naturalOR(n);
    getch();
}
int naturalOR(int n)
{
    int p;
    if(n==1)
    {
        printf(" %d ",n);
        return 1;
    }
    printf(" %d ",2*n-1);
    p=naturalOR(n-1);
    return p;
}
