#include<conio.h>
#include<stdio.h>
int count(int);
int count(int n)
{
    int c=1,s;
    if(n==0)
        return n;
    s=c+count(n/10);
    return s;
}
void main()
{
    int N,k;
    printf("Enter a number");
    scanf("%d",&N);
    k=count(N);
    if(k==1)
        printf("U");
    else if(k==2)
        printf("T");
    else if(k==3)
        printf("H");
    else if(k==4)
        printf("TH");
    else
        printf("TT");
    getch();
}
