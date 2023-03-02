#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Add two numbers
 * @n1: input 1
 * @n2: input 2
 * @r: input 3
 * @size_r: input 4
 * Return: Result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int leni = 0, lenj = 0, k = 0, i, j, sum, max;

while (n1[leni] != '\0')
leni++;
while (n2[lenj] != '\0')
lenj++;
if (leni > lenj)
max = leni;
else
max = lenj;
if ((max + 1) >= size_r)
return (0);
r[max + 1] = '\0';
while (max >= 0)
{
i = (n1[leni - 1] - '0');
j = (n1[lenj - 1] - '0');
if (leni > 0 && lenj > 0)
sum = i + j + k;
else if (leni < 0 && lenj > 0)
sum = j + k;
else if (leni > 0 && lenj < 0)
sum = i + k;
else
sum = k;
if (sum > 9)
{
k = sum / 10;
sum = (sum % 10) + '0';
}
else
{
k = 0;
sum = sum + '0';
}
r[max] = sum;
leni--;
lenj--;
max--;
}
if (*(r) != 0)
return (r);
else
return (r + 1);
}
