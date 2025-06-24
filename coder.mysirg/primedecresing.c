main()
{
    int n,m,i,j;
    printf("Enter two numbers");
    scanf("%d%d",&n,&m);
    if(n>m)
    {
        for(i=n;i>=m;i--)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
            printf("%d ",j);
    }

    }
    else{
    for(i=m;i>=n;i--)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
            printf("%d ",j);
    }
    }
    getch();
}
