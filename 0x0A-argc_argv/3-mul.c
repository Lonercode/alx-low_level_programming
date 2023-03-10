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

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = 1;

		for (i = 1; i < 3; i++)
			mult *= atoi(argv[i]);

		printf("%d\n", mult);
	}

	return (0);
}

