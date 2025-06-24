#include<conio.h>
#include<stdio.h>
void arm(int);
void arm(int n)
{
    int num,r,p=0,s,count=0;
    num=n;
    s=n;
    while(n)
    {
        r=n%10;
        count++;
        n=n/10;
    }
   // printf("%d\n",count);
    //printf("%d\n",num);
    //printf("%d\n",s);
    while(num)
    {
        r=num%10;
        p=p+pow(r,count);
        //printf("%d\n",p);
        num=num/10;

    }
    if(p==s)
        printf("Armstrong number");
    else
        printf("Not Armstrong number");
}
void main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    arm(n);
}



 /*  if(p==s)
        printf("Armstrong number");
    else
        printf("Not Armstrong number");
}
*/
