#include<stdio.h>
int swap();
int main()
{
    swap();
}
int swap()
{
    int a,b,temp;
    scanf ("%d",&a);
    scanf ("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d%d",a,b);
    return 0;
}