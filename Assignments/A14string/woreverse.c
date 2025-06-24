main()
{
    int i,count=0;
    char str[50];
    printf("Enter a string\n");
    gets(str);
    for(i=0;str[i];i++)
    {
       count++;
    }
    printf("count:%d\n",count);
    for(i=count;i>=0;i--)
    {
        printf("%c",str[i]);

    }
    getch();
}
