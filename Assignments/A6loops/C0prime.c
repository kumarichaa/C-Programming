main()
{
    int x,y,i,j,count=0;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        for(i=1;i<=x;i++)
        {
            if(x%i==0)
            {
                for(j=1;j<=y;j++)
                {
                    if(y%j==0)
                    {
                        if(i==j)
                        {
                                count++;
                        }
                    }
                }
            }
        }
        if(count==1)
            printf("Numbers are co-prime");
        else
            printf("Numbers are not co-prime");
    }
     else
    {
        for(i=1;i<=x;i++)
        {
            if(x%i==0)
            {
                for(j=1;j<=y;j++)
                {
                    if(y%j==0)
                    {
                        if(i==j)
                        {
                                count++;
                        }
                    }
                }
            }
        }
        if(count==1)
            printf("Numbers are co-prime");
        else
            printf("Numbers are not co-prime");
    }
}
