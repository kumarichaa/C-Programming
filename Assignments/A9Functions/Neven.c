#include<conio.h>
#include<stdio.h>
void even(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf(" %d ",2*i);
    }
}
void main()
{
    int N;
    printf("Enter a number");
    scanf("%d",&N);
    even(N);
    getch();
}
