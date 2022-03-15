#include<stdio.h>
int main()
{
	int n1,n2;
	int *ptr1,*ptr2;	
    int sum,sub,mult;
    float div;   
    printf("Enter the numbers:\n");
    scanf("%d%d",&n1,&n2);
    ptr1=&n1;
    ptr2=&n2;
    sum=(*ptr1) + (*ptr2);
    sub=(*ptr1) - (*ptr2);
    mult=(*ptr1) * (*ptr2);
    div=(*ptr1) / (*ptr2);
    printf("sum= %d\n",sum);
    printf("subtraction= %d\n",sub);
    printf("Multiplication= %d\n",mult);
    printf("Division= %f\n",div);
    return 0;
}