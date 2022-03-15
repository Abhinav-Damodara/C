#include<stdio.h>
void vote();

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	vote();
	return(0);
}
void vote()
{
	int age;
	printf("Enter your age = ");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You are eligible for vote\n");
	}
	else
	{
		printf("You are not eligible for vote");
	}
}
