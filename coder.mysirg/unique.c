main()
{
    int i,count=0,x,X,s,r;
    for(i=100;i<=999;i++)
    {
        x=i;
        s=x%10;
        x=x/10;
        while(x)
        {
            r=x%10;
            x=x/10;
            if(s==r)
            {
                count++;
            }
        }
        if(count==0)
            printf("%d ",i);
    }
    getch();
}
