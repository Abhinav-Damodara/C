#include<stdio.h>
int main()
{
	int n[10]={12,35,23,54,2,55,61,64,12,33};
	int x=23;
	for(int i=0;i<10;i++)
	{
		if(x==n[i])
		{
			printf("x=%d=n=%d\n",x,n[i]);
		}
		
	}
	return(0);
}
