#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>
int main() {
    int a[3],i,max,temp;
    max=a[0];
    for(i=0;i<=3;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=3;i++)
    {
        if(a[i]>max)
        {
            max=a[i];

        }
    }
    printf("%d",max);


    return 0;
}
