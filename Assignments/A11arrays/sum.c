main()
{
    int a[10],i,s=0;
    printf("Enter ten numbers ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        s=s+a[i];
        //printf("%d",s);
    }
    printf("Sum=%d",s);
    getch();
}
