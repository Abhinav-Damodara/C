#include <stdio.h>
#include<math.h>
int main()
{
    float P,T,R,S,C;
    printf("Enter the principal amount");
    scanf("%f",&P);
    printf("Enter the time");
    scanf("%f",&T);
    printf("Enter the rate of interest");
    scanf("%f",&R);
    S=(P*T*R)/100;
    printf("The simple interest is %f",S);
    C=P*(pow(1+R/100,T)-1);
    printf("The compound interest is %f",C);
    return 0;
}