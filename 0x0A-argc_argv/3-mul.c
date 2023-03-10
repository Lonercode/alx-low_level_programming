#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiply two numbers
 * @argc: input
 * @argv: input
 * Return: Something
 */

int main(int argc, char *argv[])
{
    if (argc == 3)
    {
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);

    int mult = n * m;

    printf("%d\n", mult);
    }
    else
    {
        printf("Error\n");
        return(1);
    }
    
return(0);
}
