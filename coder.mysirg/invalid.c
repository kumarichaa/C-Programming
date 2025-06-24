main()
{
    int n,i,count=1,s,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(i==0)
            s=a[i+1]-a[i];
        else
        {
            c=a[i+1]-a[i];
            if(c==s)
            {
                count++;
                s=c;
            }
            else
                printf("%d ",a[i+1]);
        }
    }
    if(count==n-1)
        printf("0");
    getch();
}
