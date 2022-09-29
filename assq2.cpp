#include <stdio.h>

int main(int argc, char *argv[])
{
    int counter;
    printf("Program Name : %s", argv[0]);
    if (argc == 1)
        printf("\nNo Extra Command Line Argument is Passed ");
    if (argc >= 2)
    {
        printf("\nNumber Of Arguments Passed is %d", argc);
        printf("The Command Line Arguments Passed are \n");
        for (counter = 0; counter < argc; counter++)
            printf("\nargv[%d]: %s", counter, argv[counter]);
    }
    printf("\n\n");
    return 0;
}