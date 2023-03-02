#include "main.h"
/**
 * rot13 - change letters based on rot13.
 * @s: input
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
int i = 0;
int j;
char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (*(str + i) != '\0')
{
for (j = 0; j <= 51; j++)
{
if (*(str + i) == s[j])
{
*(str + i) = r[j];
break;
}
}
i++;
}
return (str);
}
