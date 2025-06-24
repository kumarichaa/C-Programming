#include<conio.h>
#include<stdio.h>
int removeocc(int,int);
void main()
{
    int N,D,k;
    printf("Enter a number");
    scanf("%d",&N);
    printf("Enter a digit");
    scanf("%d",&D);
    k=removeocc(N,D);
    printf("%d",k);
    getch();
}
int removeocc(int num,int d)
{
    int r,S=0,s=0;
    while(num)
    {
        r=num%10;
        //num=num/10;
        if(r==d);
        else
            s=s*10+r;
        num=num/10;
    }
    printf("%d\n",s);
    while(s)
    {
        r=s%10;
        s=s/10;
        S=S*10+r;
    }
    return S;
}
