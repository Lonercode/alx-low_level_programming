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
char up[] = {'A', 'E', 'O', 'T', 'L', '\0'};
char lo[] = {'a', 'e', 'o', 't', 'l', '\0'};
char nu[] = {'4', '3', '0', '7', '1', '\0'};

while (*(str + i) != '\0')
{
for (j = 0; j <= 5; j++)
{
if (*(str + i) == up[j] || *(str + i) == lo[j])
{
*(str + i) = nu[j];
}
}
i++;
}
return (str);
}
