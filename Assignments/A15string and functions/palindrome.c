main()
{
    char str[50];
    input(str,50);
    display(str,50);
    getch();
}
void input(char str[],int n)
{
    printf("Enter a string\n");
    gets(str);

}
void display(char str[],int n)
{
    char *sub;
    char str1[50];
    strcpy(str1,str);
    //printf("%s\n",str1);
    sub=strrev(str);
    //printf("%s",sub);
    if(strcmp(str1,sub)==0)
       printf("Palindrome");
    else
        printf("Not palindrome");

}
