#include <stdio.h>
#include <math.h>
/**
 * main -  Entry to code
 * Return: Always 0.
 */

int main(void)
{
	long int n = 612852475143;
	int p;

	for (p = 2; p <= sqrt(n); p++)
	{

		if (n % p == 0)
		{
			n = n / p;
			p = 1;
		}
	}
	printf("%ld\n", n);
return (0);
}
