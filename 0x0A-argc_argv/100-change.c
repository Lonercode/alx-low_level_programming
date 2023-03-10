#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry to code
 * @argc: input
 * @argv: input
 * Return: 0
 */
int change(int i);

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}

	printf("%d\n", change(atoi(argv[1])));
	return (0);
}

/**
 * change - change
 * @i: input
 * Return: change
 */
int change(int i)
{
	int j = 25, d = 10, n = 5, t = 2, p = 1;
	int i;

	while (i > 0)
	{
		while (i >= q)
		{
			i -= q;
			j++;
		}
		while (i >= d)
		{
			i -= d;
			j++;
		}
		while (i >= n)
		{
			i -= n;
			j++;
		}
		while (i >= t)
		{
			i -= t;
			j++;
		}
		while (i >= p)
		{
			i -= p;
			j++;
		}
	}
	return (j);
}
