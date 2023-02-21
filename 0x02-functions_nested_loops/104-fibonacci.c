#include <stdio.h>
/**
  * main - first 98 of the  fibonacci series
  *
  * Return: Nothing
  */
int main(void)
{
int x;
unsigned long i, j, k;
unsigned long m, n, l, val;
x = 0;
i = 0;
j = 1;
for (x = 1; x <= 91; x++)
{
k = i + j;
i = j;
j = k;
printf("%lu, ", k);
}
m = i % 1000;
i = i / 1000;
n = j % 1000;
j = j / 1000;
while (x <= 98)
{
val = (m + n) / 1000;
l = (m + n) - (val * 1000);
k = (i + j) + val;
m = n;
n = l;
i = j;
j = k;
if (l >= 100)
printf("%lu%lu", k, l);
else
printf("%lu0%lu", k, l);
if (x != 98)
printf(", ");
x++;
}
putchar('\n');
return (0);
}

