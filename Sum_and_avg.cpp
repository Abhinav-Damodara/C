#include<stdio.h>
int main()
{
    int a[4],i,sum=0,avg;
    printf("Enter elements");
    for(i = 0; i<4;i++)
    {
		scanf("%d",&a[i]);  		  
	}
    for(i=0;i<4;i++)
    {
    	sum=sum+a[i];
	}
	avg=sum/4;
    printf("%d\n%d",sum,avg);
    return (0);
}
