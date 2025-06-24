#include<conio.h>
#include<stdio.h>
int primenext(int);
int primenext(int num)
{
    int i,j,n;
    n=num+1;
    for(i=n;i<=2*num;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            break;
    }
    return i;
}
void main()
{
    int N,k;
    printf("Enter a number");
    scanf("%d",&N);
    k=primenext(N);
    printf("%d",k);
    getch();
}
