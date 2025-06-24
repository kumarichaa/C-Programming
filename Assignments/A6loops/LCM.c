main()
{
    int x,y,i,j,s,m,count=0;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    for(i=1;i<=2*x;i++)
    {
        s=0;
        s=x*i;
        for(j=1;j<=2*y;j++)
        {
            m=0;
            m=y*j;
            if(s==m)
            {
                count++;
                break;
            }
        }
        if(count==1)
            break;
    }
    printf("LCM=%d",s);
    getch();
}
