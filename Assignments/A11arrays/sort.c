main()
{
    int a[10],i,j,temp;
    printf("Enter ten numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    //printf("%d\n",count);
    for(j=0;j<9;j++)
    {
        for(i=0;i<=8-j;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(i=0;i<=9;i++)
    {
        printf(" %d ",a[i]);
    }
    getch();
}
