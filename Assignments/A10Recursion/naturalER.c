#include<conio.h>
#include<stdio.h>
int naturalER(int);
void main()
{
    int n,k;
    printf("Enter a number");
    scanf("%d",&n);
    k=naturalER(n);
    getch();
}
int naturalER(int n)
{
    int p;
    if(n==1)
    {
        printf(" %d ",2*n);
        return 1;
    }
    printf(" %d ",2*n);
    p=naturalER(n-1);
    return p;
}
