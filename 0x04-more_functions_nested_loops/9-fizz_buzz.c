#include <stdio>
/**
 * main - Fizz Buzz
 *
 * Return: 0
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 100)
	{
		x++;
		if ((x % 3) != 0 && (x % 5) != 0)
		{
			printf("%d", x);
		}
		else if ((x % 3)  == 0 && (x % 5) != 0)
		{
			printf("Fizz");
		}
		else if ((x % 3) != 0 && (x % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("FizzBuzz");
		}
		if (x < 100)
			putchar(32);
	}
	putchar('\n');
	return (0);
}


