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
void display(int b[],int n)
{
    int i,j,temp,dis,N;
    N=n-1;
    for(j=0;j<=N;j++)
    {
        dis=b[j];
        for(i=j+1;i<=N;i++)
        {
            if(dis==b[i])
            {
                temp=b[N];
                b[N]=b[i];
                b[i]=temp;
                N--;
            }

        }
    }
    printf("Distinct elements=");
    for(i=0;i<=N;i++)
        printf("%d ",b[i]);



}
