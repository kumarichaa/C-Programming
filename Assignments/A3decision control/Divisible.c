main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    num=num%10;
    if(num==5||num==0)
        printf("Number is divisible by 5");
    else
        printf("Number is not divisible by 5");
    getch();
}
