#include<stdio.h>
void avg();

int main()
{
	avg();
	return(0);
}
void avg()
{
	int a,b,avg;
	printf("Enter a value = ");
	scanf("%d",&a);
	printf("Enter b value = ");
	scanf("%d",&b);
	avg=(a+b)/2;
	printf("Avg of a and b = %d",avg);
	
}
