main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n%2==0)
    {
        if(n>0&&n<=50)
            printf("EPLTE50");
        else if(n>0&&n>50)
            printf("EPGT50");
        else
            printf("EN");
    }
    else
    {
        if(n>0&&n>5)
            printf("OPGT5");
        else if(n>0&&n<=5)
            printf("OPLTE5");
        else
            printf("ON");
    }
    getch();
}
