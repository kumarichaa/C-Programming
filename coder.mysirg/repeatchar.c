main()
{
    char str[20];
    int i,j,count;
    gets(str);
    for(i=0;str[i];i++)
    {
        count=1;
        for(j=i+1;str[j];j++)
        {

                if(str[i]==str[j])
                    count++;
        }
        if(count>=2)
        {
            printf("%c %d\n",str[i],count);
        }
    }

    getch();
}
