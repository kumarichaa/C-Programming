#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,a[3][3],b[3][3],c[3][3];
    printf("Enter first matrix");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter second matrix");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }
    }
     printf("Sum=");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    getch();
}
