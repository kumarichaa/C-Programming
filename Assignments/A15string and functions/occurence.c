main()
{
    char str[50];
    char r[10];
    input(str,50,r);
    display(str,50,r);
    getch();
}
void input(char str[],int n,char m[])
{
    printf("Enter a string\n");
    gets(str);
    printf("Enter a character\n");
    gets(m);
}
void display(char str[],int n,char m[])
{
    int i,count=0,j;
    for(i=0;str[i];i++)
        {
            for(j=0;str[j];j++)
                if(str[i]==m[j]){
                    printf("%d",i);
                break;
                }
            }
            //printf("%d",i);
        }
        //printf("count=%d",i);

