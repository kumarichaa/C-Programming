main()
{
    int i,count=0;
    char str[30];
    char m='r';
    printf("Enter your name\n");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(m==str[i])
            count++;
    }
    printf("Occurrence: %d",count);
    getch();

}
