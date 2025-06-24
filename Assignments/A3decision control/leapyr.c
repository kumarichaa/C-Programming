main()
{
    int yr;
    printf("Enter a year");
    scanf("%d",&yr);
    if(yr>=1000)
    {
        if(yr%4==0)
        {
            printf("Leap year");
        }
        else{
            printf("not leap year");
        }

    }
    else{
        if(yr%400==0)
        {
            printf("leap year");
        }
        else{
            printf("Not leap year");

        }
    }
    getch();
}
