main()
{
    char s[20],t[20];
    int i,j,count=0,k,l;
    gets(s);
    gets(t);
    for(i=0;s[i];i++)
    {
        for(j=0;t[j];j++)
        {
            if(s[i]==t[j])
            {
                count++;
            }
        }
    }
    k=strlen(s);
    l=strlen(t);
    if(count==k&&count==l)
        printf("1");
    else
        printf("0");
    getch();
}
