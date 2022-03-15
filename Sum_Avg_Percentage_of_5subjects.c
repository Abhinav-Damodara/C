#include <stdio.h>
int main()
{
    int maths,physics,chemistry,english,social,total,average,percentage;
    printf("enter the marks of maths");
    scanf("%d",&maths);
    printf("enter the marks of physics");
    scanf("%d",&physics);
    printf("enter the marks of chemistry");
    scanf("%d",&chemistry);
    printf("enter the marks of english");
    scanf("%d",&english);
    printf("enter the marks of social");
    scanf("%d",&social);
    total=maths+physics+chemistry+english+social;
    printf("total=%d\n",total);
    average=((maths+physics+chemistry+english+social)/5);
    printf("average=%d\n",average);
    percentage=(total*100)/500;
    printf("percentage=%d\n",percentage);
    return 0;
}