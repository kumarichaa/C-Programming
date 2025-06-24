main()
{
    int n,i,j,r,k,K,a=-1;
    printf("Enter a number");
    scanf("%d",&n);
    if(n%2==0)
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                r=n/i;
                break;
            }
        }
        printf("%d",r);
    }
    else
    {
        for(j=2;j<=n;j++)
        {
            if(n%j==0)
            {
                r=n/j;
                break;
            }
        }
            if(n==j)
                printf("%d",a);
            else
                printf("%d",r);
    }
    getch();
}

