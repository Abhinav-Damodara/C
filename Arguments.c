#include <stdio.h>

int main(int argc, char *argv[])
{
    int numberofarguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of arguments: %d\n", numberofarguments);
    printf("Argument1 is  the program name: %s\n", argument1);
    printf("Argumnet2 is the command  line argument: %s\n", argument2);

    return 0;
}