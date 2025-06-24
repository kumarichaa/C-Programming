#include<stdio.h>
#include<conio.h>
float area(int);
float area(int r)
{
    return 3.14*r*r;
}
void main()
{
    int R;
    float Area;
    printf("Enter radius of circle");
    scanf("%d",&R);
    Area=area(R);
    printf("Area of circle is %f",Area);
    getch();
}
