main()
{
    int i,n,count=0;
    for(i=1;i<=100;i++)
    {
        for(n=2;n<=100;n++)
        {
            if(i%n==0)
                break;
        }
        if(i==n)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\nTotal number of prime number is %d",count);
    getch();
}
