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
int i;
int mult;
if (argc == 3)
{
mult = 1;
for (i= 1; i < argc; i++)
{
mult *=argv[i];
}
printf("%d\n", mult);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
