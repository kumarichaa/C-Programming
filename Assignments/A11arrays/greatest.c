main()
{
    int a[10],i,max=a[0];
    printf("Enter ten numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=9;i++)
    {

        if(a[i]>max)
            max=a[i];
    }
    printf("Greatest number is %d",max);
    getch();
}
