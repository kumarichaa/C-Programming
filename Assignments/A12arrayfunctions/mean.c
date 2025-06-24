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
    int i,s=0,x,m,N;
    float S=0,M;
    for(i=0;i<n;i++)
    {
        s=s+b[i];
    }
    printf("%d\n",s);
    x=s/n;
    printf("%d\n",x);
    for(i=0;i<n;i++)
    {
        m=b[i]-x;
        //N=+m;
        printf("%d\n",m);
        S=S+m;
    }
    M=S/n;
    printf("mean deviation=%f",M);
}
