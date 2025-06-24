main()
{
    int x,i;
    printf("Enter a number");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
            printf("%d ",i);
    }
    getch();
}
