#include <stdio.h>
/**
  * main - Fibonacci 2.
  * 
  * Return: Nothing
  */
int main(void)
{
unsigned long x, i, j, k, sum;
i = sums = 0;
j = 1;
for (x = 0; x < 50; x++)
{
k = i + j;
i = j;
j = k;
if (k % 2 == 0 && k < 4000000)
{
sum += k;
}
}
printf("%lu\n", sum);
return (0);
}
