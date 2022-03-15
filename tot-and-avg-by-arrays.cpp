#include<stdio.h>
int main()
{
	char sub[5];
	int mar[5];
	for(int i=0;i<5;i++)
	{
		scanf("%s",&sub[i]);
		scanf("%d",&mar[i]);
	}
	for(int i=0;i<5;i++)
	{
		printf("%s = %d\n",sub[i],mar[i]);
	}
}
