#include "main.h"
/**
 * infinite_add - add two numbers
 * @n1: input 1
 * @n2: input 2
 * @r: input 3
 * @size_r: input 4
 * Return: Result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
* add - Adds the numbers.
* @n1: Input 1
* @n2: Input 2
* @r: Input 3
* @i: Input 4
*
* Return: Result
*/

char *add(char *n1, char *n2, char *r, int i)
{
	int num, t = 0;

	for (; *n1 && *n2; n1--, n2--, i--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += t;
		*(r + i) = (num % 10) + '0';
		t = num / 10;
	}

	for (; *n1; n1--; i++)
	{
		num = *(n1 - '0') + t;
		*(r + i) = (num % 10) + '0';
		t = num / 10;
	}

	for (; *n2; n2--;  i--)
	{
		num = (*n2 - '0') + t;
		*(r + i) = (num % 10) + '0';
		t = num / 10;
	}

}
