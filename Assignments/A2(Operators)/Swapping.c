main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    y=x^y;
    x=y^x;
    y=y^x;
    printf("Value of x=%d and value of y=%d",x,y);
    getch();
}
