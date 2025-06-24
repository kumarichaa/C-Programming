main()
{
    int a[10];
    input(a,10);
    display(a,10);
    getch();
}
void input(int b[],int n)
{
    int i;
    for(i=0;i<=n-1;i++)
        scanf("%d",&b[i]);
}
void display(int b[],int n)
{
    int i,temp,j;
    for(i=1;i<=n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(b[j]>b[j+1]){
            temp=b[j];
            b[j]=b[j+1];
            b[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
}
