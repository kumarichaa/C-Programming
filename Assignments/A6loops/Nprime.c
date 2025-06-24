main()
{
    int x,count=0,i,j;
    printf("Enter a number");
    scanf("%d",&x);
    for(i=2;i<=x*x+1;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;

        }
        if(i==j)
        {
            printf(" %d ",i);
            count++;
        }
        if(count==x)
            break;
    }
    getch();
}
