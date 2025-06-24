main()
{
    int a[6];
    input(a,6);
    display(a,6);
    getch();
}
void input(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
}
void display(int c[],int n)
{
    int i,j,max,min,temp;
    for(i=0;i<1;i++)
    {
        max=c[i];
        for(j=i+1;j<=n-1;j++)
        {
            if(max<c[j])
            {
                temp=max;
                max=c[j];
                c[j]=temp;
            }
        }
    }
    printf("%d ",max);
    for(i=0;i<1;i++)
    {
        min=c[i];
        for(j=i+1;j<=n-1;j++)
        {
            if(min>c[j])
            {
                temp=min;
                min=c[j];
                c[j]=temp;
            }
        }
    }
    printf("%d ",min);
}
