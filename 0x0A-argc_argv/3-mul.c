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
int n;
int m;
int mult;
if (argc == 3)
{
n = atoi(argv[1]);
m = atoi(argv[2]);
mult = n * m;
printf("%d\n", mult);
}
else if (argc == 1 || argc == 2)
{
printf("Error\n");
return (1);
}
return (0);
}
