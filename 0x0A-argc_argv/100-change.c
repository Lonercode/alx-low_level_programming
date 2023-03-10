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
	int q = 25, d = 10, n = 5, t = 2, p = 1;
	int c;

	while (i > 0)
	{
		while (i >= q)
		{
			i -= q;
			c++;
		}
		while (i >= d)
		{
			i -= d;
			c++;
		}
		while (i >= n)
		{
			i -= n;
			c++;
		}
		while (i >= t)
		{
			i -= t;
			c++;
		}
		while (i >= p)
		{
			i -= p;
			c++;
		}
	}
	return (c);
}
