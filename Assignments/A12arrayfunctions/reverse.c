main()
{
    int a[5];
    input(a,5);
    display(a,5);
    getch();
}
void input(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
}
void display(int b[],int n)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp=b[i];
        b[i]=b[n-1-i];
        b[n-1-i]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
}
