#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,s=0,r,f=1;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        while(r)
        {
            f=f*r;
            r--;
        }
        s=s+f;
        n=n/10;
        f=1;
    }
    printf("%d",s);
    return 0;
}
