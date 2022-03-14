#include<stdio.h>
int sum(int,int);

int sum(int x,int y)
{
	int sum;
	sum=x+y;
	return sum;
}

int main()
{
	int a,b;
	printf("Enter a and b values = ");
	scanf("%d %d",&a,&b);
	printf("sum of a and b = %d",sum(a,b));
	return(0);	
}