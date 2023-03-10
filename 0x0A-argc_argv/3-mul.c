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
    int args = 2;
    int mult;
    int i;
    
    if (argc == args)
    {
        mult = 1;

		for (i = 1; i < 3; i++)
        {
			mult *= atoi(argv[i]);
        }

		printf("%d\n", mult);
    }
    else
    {
        printf("Error");
        putchar('\n');
        return (1);
    }
    
return(0);
    
}
