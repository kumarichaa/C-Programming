main()
{
    char str[300];
    richa(str,300);
    richaa(str,300);
    getch();
}
void richa(char str1[],int n)
{
    printf("Enter a paragraph\n");
    gets(str1);
}
void richaa(char str1[],int n)
{
    int i=0,count=1;
    for(i=0;str1[i];i++)
    {
        if(str1[i]==32)
            count++;
    }
    printf("count=%d",count);
}
