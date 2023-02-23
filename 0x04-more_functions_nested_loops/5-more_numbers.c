#include "main.h"
/**
 * more_numbers - Prints the numbers 1 - 14 ten times followed by a new line
 *
 * Return: Nothing
 */
void more_numbers(void)
{
int i, j;
i = 0;
while (i <=10)
{
for (j = 0; j <=14; j++)
{
_putchar(j);
}
i++
}
_putchar("\n");
}
