#include<stdio.h>
int max();
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is maximum",a);
    }
    else if(b>a)
    {
        printf("%d is maximum",b);
    }
    else
    {
        printf("Both are equal");
    }
    return 0;
}