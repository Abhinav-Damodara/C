#include<stdio.h>
int main()
{
	int a[10],n;
	printf("Enter size of an array = ");
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
		if(a[i]%2==0)
		{
			printf("even no. in an array = %d\n",a[i]);
		}
		else
		{
			printf("odd no. in an array = %d\n",a[i]);
		}
	}
}

