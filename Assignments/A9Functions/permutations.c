#include<stdio.h>
#include<conio.h>
int permutation(int,int);
void main()
{
    int n,r,k;
    printf("Enter no. of items:");
    scanf("%d",&n);
    printf("Enter selected no. of items:");
    scanf("%d",&r);
    k=permutation(n,r);
    printf("Number of permutations=%d",k);
    getch();
}
int permutation(int n,int r)
{
    int f=1,F=1,per,R;
    R=n-r;
    while(n)
    {
        f=f*n;
        n--;
    }
    while(R)
    {
        F=F*R;
        R--;
    }
    per=f/F;
    return per;
}
