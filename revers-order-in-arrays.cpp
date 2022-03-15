#include<stdio.h>
int main()
{
	float a[5];

	for(int i=0;i<5;i++)
	{
		scanf("%f",&a[i]);
	}
	for(int i=4;i>=0;i--)
	{
		printf("a = %f\n",a[i]);
	}
	return(0);
}

