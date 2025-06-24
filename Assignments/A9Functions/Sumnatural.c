#include<conio.h>
#include<stdio.h>
int sumnatural(int);
int sumnatural(int n)
{
    int i=1,s=0;
    for(i=1;i<=n;i++)
        {
            s=s+i;
        }
        return s;
}
void main()
{
    int N,k;
    printf("Enter a number");
    scanf("%d",&N);
    k=sumnatural(N);
    printf("Sum o fnatural number is %d",k);
    getch();
}
