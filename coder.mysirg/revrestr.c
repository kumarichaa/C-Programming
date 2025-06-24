void main()
{
    char str[25];
    int k;
    input(str,25);
    display(str,25);
    getch();
}
void input(char str[],int n)
{
    gets(str);
}
void display(char str[],int n)
{
    char str1[]={'a','e','i','o','u','A','I','E','O','U'};
    int k=1,l,i,j,temp;
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        for(j=0;str1[j];j++)
        {
            if(str[i]==str1[j])
                {
                for(j=0;str1[j];j++)
                {
                    if(str[l-k]==str1[j])
                    {
                        temp=str[l-k];
                        str[l-k]=str[i];
                        str[i]=temp;
                        l--;
                        break;
                    }
                }
                break;
            }
        }
    }
    printf("%s",str);

}
