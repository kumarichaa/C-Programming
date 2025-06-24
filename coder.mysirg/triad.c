main()
{
    int i,x,r,s=0,X,N,count,s1,s2,Y,Z,y,z,d,d1;
    scanf("%d",&N);
    for(i=100;i<=999;i++)
    {
    x=i;
    X=x;
    s=0;
    r=0;
    s1=0;
    s2=0;
    d=0;
    d1=0;
    count=0;
    while(X)
    {
        r=X%10;
        s=s+r;
        X=X/10;
    }
    r=0;
    y=x*2;
    Y=y;
    while(Y)
    {
        r=Y%10;
        s1=s1+r;
        Y=Y/10;
    }
    r=0;
    z=x*3;
    Z=z;
    while(Z)
    {
        r=Z%10;
        s2=s2+r;
        Z=Z/10;
    }
    d=s1-s;
    d1=s2-s1;
    if(s==12&&s1==15&&s2==18)
    {
        printf("%d %d %d\n",x,y,z);
        count++;
    }


//if(count==N)
  //  break;


    }
    getch();
}
