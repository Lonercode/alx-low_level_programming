#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generate random valid passwords
 *
 * Return: 0 (success)
 */
int main(void)
{
	char i;
	int x;

	srand(time(0));
	while (x <= 2645)
	{
		i = rand() % 128;
		x += i;
		putchar(i);
	}
	putchar(2772 - x);

	return (0);
}
             
