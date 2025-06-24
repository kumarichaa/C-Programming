main()
{
    int n,i,s=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            s=s+i;
    }
    if(s>n)
        printf("Number is abundant ");
    else
        printf("Number is not abundant");
    getch();
}
