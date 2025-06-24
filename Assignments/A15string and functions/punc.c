#include <stdio.h>
#include <ctype.h>
void input(char str[],int n)
{
    gets(str);
}
void display(char str[],int n)
{
    int i,j;
    char *s;
    s=str;
    char str1[50],s[50];
        for(j=0;j<=255;++j)
        {
            if(ispunct(s)!=0)
                printf("%c",i);

    }
    strcpy(s,str1);
    for(i=0;str[i];i++)
    {
        if(str[i]==s)
            break;
        else
            printf("%c",str[i]);
    }
}
int main()
{
    char str[50];
    input(str,50);
    display(str,50);
    getch();
}
