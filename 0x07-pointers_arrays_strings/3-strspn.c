#include "main.h"
/**
 * _strspn - strspn
 * @s: input
 * @accept: input
 *
 * Return: Result
 */
unsigned int _strspn(char *s, char *accept)
{
    int i = 0;
    int j;
    int num;

    while (accept[i] != '\0')
    {
        i++;
    }

    for (j = 0; j <= i; j++)
    {
        if (s[j] == accept[j])
        {
            num = i;
        }
        else if (s[0] != accept[0])
        {
            num = 0;
        }
    }
    return(num);
}
