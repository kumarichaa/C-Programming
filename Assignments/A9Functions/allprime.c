#include<conio.h>
#include<stdio.h>
void prime(int,int);
void prime(int x,int y)
{
    int i,j;
    for(i=x;i<=y;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
            printf(" %d ",i);
    }
}
void main()
{
    int n,N;
    printf("Enter two numbers");
    scanf("%d%d",&n,&N);
    prime(n,N);
    getch();
}
