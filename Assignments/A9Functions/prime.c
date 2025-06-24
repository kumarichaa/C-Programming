#include<conio.h>
#include<stdio.h>
int prime(int);
int prime(int n)
{
    int i;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        return 1;
    else
        return 0;
}
void main()
{
    int N,k;
    printf("Enter a number");
    scanf("%d",&N);
    k=prime(N);
    printf("%d",k);
    getch();
}
