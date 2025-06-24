main()
{
    char str[30];
    int i,p=-1,count=0;
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            count++;
            break;
        }
    }
    if(count==1)
        printf("%d",i+1);
    else
        printf("%d",p);
    getch();
}
