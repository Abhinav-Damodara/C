#include<stdio.h>
int main()
{
	int n[5],even=0,odd=0;
	for(int i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
	for(int i=0;i<5;i++)
	{
		if(n[i]%2==0)
		{
			printf("even no. %d\n",n[i]);
		}
		else
		{
			printf("odd no. %d\n",n[i]);
		}
	}
	return(0);
}
