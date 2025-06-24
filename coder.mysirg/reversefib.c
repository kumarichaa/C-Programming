main()
{
    int N,n,i,a=1,b=-1,t,c;
    printf("Enter a number");
    scanf("%d",&n);
    N=n;
    while(n)
    {
        t=a+b;
        b=a;
        a=t;
        n--;
    }
    for(i=1;i<=N;i++)
    {
        if(i==1)
            printf("%d ",a);
        else if(i==2)
            printf("%d ",b);
            else
            {
                c=a-b;
                printf("%d ",c);
                a=b;
                b=c;
            }
    }
    getch();
}
