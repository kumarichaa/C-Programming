main()
{
    int num,count=0,r;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num)
    {
        r=num%10;
        count++;
        num=num/10;
    }
    printf("Total counts=%d",count);
    getch();
}
