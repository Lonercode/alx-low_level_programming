#include <stdio.h>
#include "main.h"
/**
 * main - Fibonacci Sequence
 *
 * Return: 0
 */
int main(void)
{
unsigned long x, i, j, k;
i = 0;
j = 1;
for (x = 0; x < 50; x++)
{
k = i + j;
i = j;
j = k;
printf("%lu", k);
if (x == 49)
putchar('\n');
else
{
printf(", ");
}
}
return (0);
}
