main()
{
    int x=0,i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            {
                if(j>4&&j<=7)
                {
                    x--;
                    printf("%d",x);
                }
                else
                {
                    x++;
                    printf("%d",x);

                }

            }
            else
                printf(" ");
        }
        printf("\n");
        x=0;
    }
    getch();
}
