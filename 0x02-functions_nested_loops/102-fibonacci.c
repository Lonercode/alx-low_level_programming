#include <stdio.h>
#include "main.h"
/**
 * main - Fibonacci Sequence
 *
 * Return: 0
 */
int main(void)
{
int i;
int x = 1;
int y = 2;
int n = x + y;
printf("Fibonacci Series: %d, %d, ", x, y);
for (i = 3; i <= 49; i++)
{
printf("%d, ", n);
x = y;
y = n;
n = x + y;
}
return (0);
}
