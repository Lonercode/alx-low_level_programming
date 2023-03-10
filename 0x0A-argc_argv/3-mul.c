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
int m;
int mult;
if (argc == 3)
{
m = atoi(argv[2]);
mult = m;
printf("%d\n", mult);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
