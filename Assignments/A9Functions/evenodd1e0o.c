#include<conio.h>
#include<stdio.h>
int evenodd(int);
int evenodd(int x)
{
    if(x&1)
        return 0;
    else
        return 1;
}
void main()
{
    int x,k;
    printf("Enter a number");
    scanf("%d",&x);
    k=evenodd(x);
    printf("%d",k);
    getch();
}
