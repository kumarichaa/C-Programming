main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    x=x&1;
    if(x==0)
        printf("even number");
        else
            printf("Odd number");
    getch();
}
