main()
{
    int i,num,k,j,r;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {

        if(num%i==0)
        {
            for(j=i;j<=i;j++)
            {
                for(k=2;k<=j;k++)
                {
                    if(j%k==0)
                        break;
                }
                if(j==k)
                    printf("%d ",k);

            }

        }
    }
    getch();
}
