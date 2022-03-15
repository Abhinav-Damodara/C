#include<stdio.h>
int count_digits(int);
int main()
{
	int num;
	printf("Enter any value = ");
	scanf("%d",&num);
	printf("number of digits = %d",count_digits(num));
	return(0);
}
int count_digits(int n)
{
	int count=0;
	while(n!=0)
	{
		n/=10;
	    ++count;
	}
	return count;
}
