 void main()
{
    char str[45];
    int k;
    input(str,45);
    k=display(str,45);
    printf("No of vowels=%d",k);
    getch();
}
void input(char str[],int n)
{
    printf("Enter a string\n");
    gets(str);
}
int display(char str[],int n)
{
    char str1[]={'a','e','i','o','u','A','I','E','O','U'};
    int count=0,i,j;
    for(i=0;str[i];i++)
    {
        for(j=0;str1[j];j++)
        {
            if(str[i]==str1[j]){
                count++;
                break;
            }
        }
    }
    return count;
}
