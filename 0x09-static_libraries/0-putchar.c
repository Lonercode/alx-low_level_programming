#include "main.h"
#include <unistd.h>
/**
 * main - Entry
 *
 * Return: Success(0)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
