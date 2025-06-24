#include<conio.h>
#include<stdio.h>
int combination(int,int);
void main()
{
    int n,r,k;
    printf("Enter items:");
    scanf("%d",&n);
    printf("Enter selected items:");
    scanf("%d",&r);
    k=combination(n,r);
    printf("Number of combinations=%d",k);
    getch();
}
int combination(int n,int r)
{
    int N,f=1,F=1,fact=1,m;
    N=n-r;
    while(n)
    {
        f=f*n;
        n--;
    }
    while(r)
    {
        F=F*r;
        r--;
    }
    while(N)
    {
        fact=fact*N;
        N--;
    }
    m=F*fact;
    return f/m;

}
