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
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
}
void display(int b[],int n)
{
    int i,j,count,N,temp,dis;
    N=n-1;
    for(j=0;j<=N;j++)
    {
        dis=b[j];
        count=1;
        for(i=j+1;i<=N;i++)
        {
            if(dis==b[i])
            {
                temp=b[N];
                b[N]=b[i];
                b[i]=temp;
                N--;
                count++;
            }
        }
            printf("element=%d and frequency= %d\n",dis,count);


}
}
