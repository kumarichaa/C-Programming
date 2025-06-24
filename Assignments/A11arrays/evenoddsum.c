main()
{
    int a[10],i,s=0,sum=0;
    printf("Enter ten numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]%2)
            s=s+a[i];
        else
            sum=sum+a[i];
    }
    printf("Sum of all even numbers is %d and sum of all odd numbers is %d",sum,s);
    getch();
}
