#include<conio.h>
#include<stdio.h>
#include<string.h>
//void  richa(char,int);
//void play(char,int);
void main()
{
    char str[40];
    richa(str,40);
    play(str,40);
    getch();
}
void richa(char str[] ,int n)
{
    gets(str);
}
void play(char str1[],int n)
{
    int count=1,i;
    for(i=0;str1[i];i++)
    {
        if(str1[i]==32)
            count++;

    }
    printf("%d",count);
}
