#include <stdio.h>
/**
 * string_toupper - Lowercase to upper
 * @str: input 1
 *
 * Return: Result 
 */
char *string_toupper(char *str)
{
    int i = 0;
    int j;

    while (str[i] != '\0')
    {
        i++;
    }

    for (j = 0; j < i; j++)
    {
        if ((str[j] >= 97) && (str[j] <= 122))
        {
            str[j] = str[j] - 32;
        }
    }
    return (str);
}
