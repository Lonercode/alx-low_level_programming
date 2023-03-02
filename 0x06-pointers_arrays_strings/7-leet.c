#include "main.h"
/**
 * leet - 1337
 * @str: input 1
 * Return: Result of concatenation
 */
char *leet(char *str)
{
int i = 0;
int j;
char up[] = {'A', 'E', 'O', 'T', 'L'};
char lo[] = {'a', 'e', 'o', 't', 'l'};
char nu[] = {'4', '3', '0', '7', '1'};

while (str[i] != 0)
{
i++;
}
for (j = 0; j <= i; j++)
{
if (str[j] == up[j]  || str[j] == lo[j])
{
up[j] = lo[j] = nu[j];
str[j] = nu[j];
}
}
return (str);
}
