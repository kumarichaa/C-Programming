main()
{
    char str[8][10];
    char str1[]={'A','E','I','O','U','a','e','i','o','u'};
    int i,j,k,count=0;
    for(i=0;i<8;i++)
    {
        gets(str[i]);
    }
    for(i=0;i<8;i++)
    {
        for(j=0;str1[j];j++)
        {
            for(k=0;str[i][k];k++)
            {
                if(str[i][k]==str1[j])
                    count++;
            }
        }
        printf("%d\n",count);
    }
    printf("total number of vowels=%d",count);
    getch();
}
