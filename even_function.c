#include<stdio.h>
int even();
int main()
{
    even();
}
int even()
{
    int n,i=0;
    printf("The range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    return(0);
}