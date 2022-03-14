#include<stdio.h>
int product();

int main()
{
	product();
}
int product()
{

	int a,b,c;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
    c=a*b;
	
	printf("the result is  %d",c);
}