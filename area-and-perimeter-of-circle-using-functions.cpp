#include<stdio.h>
void ap();

int main()
{
	ap();
	return(0);
}
void ap()
{
	int r;
	printf("enter the radius =");
	scanf("%d",&r);
	int area= (3.14)*(r*r);
	int peri= 2*(3.14)*r;
	printf("Area = %d\n",area);
	printf("Perimeter = %d\n",peri);
}
