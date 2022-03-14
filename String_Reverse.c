//write a c program print the reverse of the string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf (" \nstring to be reversed: ");
    scanf ("%s",&str);
    printf (" \nreverse of a string: %s ", strrev(str));
    return 0;
}  