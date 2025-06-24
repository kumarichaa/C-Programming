#include<conio.h>
#include<stdio.h>
int factorial(int);
void main()
{
    int num,k;
    printf("Enter a number");
    scanf("%d",&num);
    k=factorial(num);
    printf("Factorial is %d",k);
    getch();
}
int factorial(int num)
{
    int f=1;
    while(num)
    {
        f=f*num;
        num--;
    }
    return f;
}
