#include <stdio.h>
int main()
{
    float h,b,area;
    printf("enter height");
    scanf("%float",&h);
    printf("enter base");
    scanf("%float",&b);
    area= (b*h)/2;
    printf("Area of the triangle = %.2f sq. units", area);
    return 0;
}