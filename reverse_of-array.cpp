#include<stdio.h>
int main()
{
	float a[10];
	int n;
	printf("Enter size of an array = ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	for(int i=n-1;i>=0;i--)
	{
		printf("a = %f\n",a[i]);
	}
	return(0);
}
