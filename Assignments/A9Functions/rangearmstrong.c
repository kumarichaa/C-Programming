#include<stdio.h>
#include<conio.h>
void rangearm(int,int);
void rangearm(int x,int y)
{
    int i,j,count=0,r,k,p=0;
    for(i=x;i<=y;i++)
    {
        j=i;
        count=0;
        while(j)
        {
            r=j%10;
            count++;
            j=j/10;
        }
        k=i;
        while(k)
        {
            r=k%10;
            p=p+pow(r,count);
            k=k/10;
        }
        if(p==i)
        printf("%d ",i);
        p=0;


    }

}
void main()
{
    int N,n;
    printf("Enter two numbers");
    scanf("%d%d",&N,&n);
    rangearm(N,n);
    getch();

}
