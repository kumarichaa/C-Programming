main()
{
    int x,n,i,j;
    printf("Enter a number");
    scanf("%d",&x);
    n=x+1;
    for(i=n;i<=2*x;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
        {
            printf("%d",i);
            break;
        }
    }
    getch();
}
