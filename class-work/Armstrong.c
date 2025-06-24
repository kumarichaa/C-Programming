main()
{
    int i,S,s=0,r;
    for(i=1;i<=500;i++)
    {
        S=i;
        while(S)
        {
            r=i%10;
            s=s+r*r*r;
            S=i/10;
        }
        if(i==s)
            printf("%d",s);
    }
}
