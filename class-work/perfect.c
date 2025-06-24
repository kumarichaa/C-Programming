#include<conio.h>
#include<stdio.h>
int perfect(int);
int perfect(int num)
{
    int s=0,i;
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            s=s+i;
        }
    }
    if(s==num)
        return 1;
    else
        return -1;

}
void main()
{
    int N,k;
    printf("Enter a number");
    scanf("%d",&N);
    k=perfect(N);
    printf("%d",k);
    getch();
}
