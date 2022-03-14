#include<stdio.h>
int main()
{
	int a,b,choice;
	printf("Enter the two numbers which need to undergo the operation");
	scanf("%d%d",&a,&b);
	printf("Enter the operation");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("addition is %d",a+b);
		break;
		case 2:printf("sustraction is %d",a-b);
		break;
		case 3:printf("multiplication is %d",a*b);
		break;
		case 4:printf("division is %d",a/b);
		break;
		case 5:printf("modular devision is %d",a%b);
		break;
		default:printf("wrong input");
	}
	return(0);
}
