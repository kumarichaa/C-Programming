#include<string.h>
#include<conio.h>
#include<stdio.h>
char* display(char*);
void main()
{
    char str[40];
    char *s;
    printf("Enter a string");
    gets(str);
    s= strrev(str);
    printf("%s",s);
    getch();
}
/*

    char *sub;
    printf("Enter a string");
    gets(str);
    sub=strrev(str);
    printf("%s",sub);
    getch();
}*/
