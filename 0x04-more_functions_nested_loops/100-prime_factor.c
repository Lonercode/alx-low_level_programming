#include <stdio.h>

/**
 * main - Entry to code
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int p;

	p = 3;
	while (p < n / 2)
	{
		if ((n % p) == 0)
		{
			if((p % 3) == 2)
				printf(",%lu ", p);
		}

		p+=2;
	}

	putchar('\n');
	return (0);
}
