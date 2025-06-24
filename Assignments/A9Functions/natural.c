#include<stdio.h>
#include<conio.h>
void natural(int);
void natural(int n)
{
    int i=1;
    while(i<=n)
    {
        printf(" %d ",i);
        i++;
    }
}
void main()
{
    int N;
    printf("Enter a number");
    scanf("%d",&N);
    natural(N);
    getch();
}
