#include<stdio.h>
int main()
{
	int x=10,y=20;
	int *a=&x,*b=&y;
	printf("%d\n",(*a+*b));
	
	return(0);
}
