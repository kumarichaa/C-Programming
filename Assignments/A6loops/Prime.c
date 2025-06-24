main()
{
    int num,i;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
            break;
    }
    if(i==num)
        printf("Prime number");
    else
        printf("Not prime number");
    getch();
}
