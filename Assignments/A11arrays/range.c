#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,count,r,k,p=0,s,x,y;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
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
       // printf("%d ",count);
        k=i;
        while(k)
        {
            s=k%10;
            p=p+pow(s,count);
            k=k/10;
        }
        if(p==i)
        printf("%d ",p);
        p=0;
    }

    getch();
}
