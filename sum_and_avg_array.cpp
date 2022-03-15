#include<stdio.h>
int main()
{
	int a[10],n,sum=0;
	printf("Enter size = ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("a%d = %d\n",(i+1),a[i]);
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	float avg=sum/n;
	printf("Sum of array = %d\n",sum);
	printf("Average of array = %.2f\n",avg);
}
