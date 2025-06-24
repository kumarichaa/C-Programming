main()
{
    int n,r,f=1,i,s=0,num;
    printf("Enter a number");
    scanf("%d",&n);
    num=n;
    while(n)
    {
        f=1;
        r=n%10;
        while(r)
        {
            f=f*r;
            r--;
        }
        printf("%d\n",f);
        s=s+f;
        n=n/10;
    }
    if(s==num)
        printf("1");
    else
        printf("0");
getch();
}
