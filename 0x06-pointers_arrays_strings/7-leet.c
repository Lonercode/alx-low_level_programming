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

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; i < 5; j++)
{
if (str[i] == up[j] || str[i] == lo[j])
{
str[i] = nu[j];
}
}
}
return (str);
}
