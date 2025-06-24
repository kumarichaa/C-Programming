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
    int p,count=0;
    if(n==1)
    {
        printf(" %d ",count+1);
        return count;
    }
    count++;
    p=natural(n-1);
    printf(" %d ",count-1);
    return p;
}
