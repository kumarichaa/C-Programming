main()
{
    int i,x=1,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            {
                    if(j>=5&&j<=7)
                    {

                    printf("%d",x);
                    }
                    else
                   printf("%d",x);

            }

            else
                printf(" ");

x++;
        }
x=1;
        printf("\n");
    }
    getch();
}
