main()
{
    int a[10],i,min=a[0];
    printf("Enter ten numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=9;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("Smallest number is %d",min);
    getch();
}
