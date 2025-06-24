main()
{
    int x,y,HCF,i,j;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    for(i=1;i<=x;i++)
    {
        if(x%i==0){
        for(j=1;j<=y;j++)
        {
            if(y%j==0)
            {
                if(i==j)
                    HCF=j;
            }
        }
        }
    }
    printf("HCF= %d",HCF);
    getch();
}
