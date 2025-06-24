main()
{
    int n,i,j;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(n%j==0)
            {
                while(n%j==0)
                {
                    n=n/i;
                    if(i==j)
                        printf("%d ",j);
                }
            }
        }
    }
    getch();
}
