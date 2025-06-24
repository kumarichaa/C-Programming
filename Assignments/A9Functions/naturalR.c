#include<stdio.h>
#include<conio.h>
void naturalR(int);
void naturalR(int n)
{
    while(n)
    {
        printf(" %d ",n);
        n--;
    }
}
void main()
{
    int N;
    printf("Enter a number");
    scanf("%d",&N);
    naturalR(N);
    getch();
}
