#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int count=0;
    //char n;
    //printf("Enter value of n");
    //scanf("%d",&n);
    char str[50];
    int i;
    gets(str);
    for(i=0;str[i];i++)
    {

        if(str[i]==32)
        {
            count++;
            printf("\n");
        }
        else {

        printf("%c",str[i]);
        }
    }
    return 0;
}
