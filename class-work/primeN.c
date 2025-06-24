main()
{
    int i,j,count=0,num;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=2;;i++)
    {
        for(j=2;j<=num;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
        {
            printf(" %d ",i);
            count++;
        }
        if(num==count)
            break;
    }
}
