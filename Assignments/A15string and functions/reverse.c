main()
{
    char str[50];
    input(str,50);
    display(str,50);
    getch();
}
void input(char str[],int n)
{
    printf("Enter string");
    gets(str);
}
void display(char str[],int n)
{
    int x,i,count=0;
    char temp;
    x=strlen(str);
    printf("%d\n",x);
    //printf("%s\n",strrev(str));
    for(i=0;i<=x/2;i++)
    {
        temp=str[i];
        str[i]=str[x-1-i];
        str[x-1-i]=temp;
    }
    printf("%s",str);
}













































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































