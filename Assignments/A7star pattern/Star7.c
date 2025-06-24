main()
{
    int i,j,x='@';
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=6-i&&j<=2+i)
            {
                printf(" ");
            }
            else{
                if(j>=5&&j<=7)
                {
                    x--;
                    printf("%c",x);
                }
                else
                {
                    x++;
                    printf("%c",x);
                }

            }
        }
        printf("\n");
        x='A';
    }
    getch();
}
