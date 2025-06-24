#include<conio.h>
#include<stdio.h>
int natural(int );
void main()
{
    int n,k;
    printf("Enter number");
    scanf("%d",&n);
    k=natural(n);
    getch();
}
int natural(int n)
{
    int s=1,p,N;
    N=n;
    if(n==1)
    {
        printf(" %d ",N-1);
        return N;
    }
    p=s-natural(n-1);
    printf(" %d ",p);
    return p;
}
