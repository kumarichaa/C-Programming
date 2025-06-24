
main()
{
    int num,sum=0,r;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    printf("Total sum of digits=%d",sum);
    getch();
}
