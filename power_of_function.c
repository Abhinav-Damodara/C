#include<stdio.h>
int power();
int main()
{
    power();
}
int power()
{
    int a,b,n;
    printf("enter a and n = ");
    scanf("%d%d",&a,&n);
    int result=1;
    while (n != 0)
    {
        result *= a;
        --n;
    }
    printf("Answer = %d\n",result);
    return 0;
}