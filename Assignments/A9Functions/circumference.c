#include<conio.h>
#include<stdio.h>
float circum(int);
float circum(int r)
{
    return 2*3.14*r;
}
void main()
{
    int R;
    float C;
    printf("Enter a  radius");
    scanf("%d",&R);
    C=circum(R);
    printf("circumference of circle is %f",C);
    getch();
}
