#include<stdio.h>
int main()
{
    int seconds, hours, minutes, s;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);
    hours = seconds/3600;
    minutes = (seconds - hours*3600)/60;
    s = seconds - hours*3600 - minutes*60;
    printf("%d seconds = %d hours : %d minutes : %d seconds", seconds, hours, minutes, s);
    return(0);
}