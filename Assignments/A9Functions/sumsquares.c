#include<conio.h>
#include<stdio.h>
int sumsquare(int);
int sumsquare(int n)
{
    int s=0,i;
    for(i=1;i<=n;i++)
        s=s+i*i;
    return s;
}
void main()
{
    int k,N;
    printf("Enter a number");
    scanf("%d",&N);
    k=sumsquare(N);
    printf("Sum of squares is %d",k);
    getch();
}
