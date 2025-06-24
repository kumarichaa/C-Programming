main()
{
    char str[25];
    int i,j,temp;
    printf("Enter a string\n");
    gets();
    for(j=0;str[j];j++)
    {
        for(i=0;str[i];i++)
        {
            if(str[i]>str[i+1])
            {
                temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
            }
        }
    }
    for(i=0;str[i];i++)
        printf("%c",str[i]);
    getch();
}
