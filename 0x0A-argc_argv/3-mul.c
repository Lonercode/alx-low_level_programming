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
    int mult;
    int i;
    
    if (argc != 1 || argc != 2)
    {
        int n1 = atoi(argv[1]);
        int n2 = atoi(argv[2]);
        int mult = n1 * n2;
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
