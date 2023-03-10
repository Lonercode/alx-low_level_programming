#include <stdio.h>
/**
 * main - List of arguments in program
 * @argc: input
 * @argv: input
 * Return: Something
 */

int main(int argc, char *argv[])
{
    int i = 0;
    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return (0);
}
