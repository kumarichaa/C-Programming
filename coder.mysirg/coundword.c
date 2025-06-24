main()
{
    int num,r,s=0;
    printf("Enter a number");
    scanf("%d",&num);
    while(num)
    {
        r=num%10;
        s=s*10+r;
        num=num/10;
    }
    while(s)
    {
        r=s%10;
        if(r==1)
            printf("One ");
        else if(r==2)
            printf("Two ");
        else if(r==3)
            printf("Three ");
            else if(r==4)
            printf("Four ");
            else if(r==5)
            printf("Five ");
            else if(r==6)
            printf("Six ");
            else if(r==7)
            printf("Seven ");
            else if(r==8)
            printf("Eight ");
            else if(r==9)
            printf("Nine ");
            else
                printf("Zero ");
        s=s/10;
    }
    getch();
}
