#include<stdio.h>
int main()
{
	int a=10,b=20,*p,*q;
	p=&a;
	q=&b;
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
	/*a=a+b;
	  b=a-b;
	  a=a-b;*/
	printf("%d\t%d",*p,*q);
	return(0);
}
