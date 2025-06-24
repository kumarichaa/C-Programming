main()
{
    char str1[25],str2[25];
    input(str1,25,str2,25);
    display(str1,25,str2,25);
    getch();
}
void input(char str[],int n,char str1[],int m)
{
    printf("Enter first string\n");
    gets(str);
    printf("Enter second string\n");
    gets(str1);
}
void display(char str[],int n,char str1[],int m)
{
    int i;
    i=strcmp(str,str1);
    if(i==0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
}
