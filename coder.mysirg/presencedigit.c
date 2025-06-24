main()
{
    int m,n,d,count=0,N,r,i;
    scanf("%d\n%d%d",&d,&m,&n);
        for(i=n;i<=m;i++)
        {
            N=i;
            while(N)
            {
                r=N%10;
                if(r==d){
                        printf("%d ",i);
                        count++;
                        break;
                }
                N=N/10;
            }
        }
        if(count==0)
            printf("-1");

    getch();
}
