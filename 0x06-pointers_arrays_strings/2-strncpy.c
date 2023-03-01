#include "main.h"
/**
 * _strcat - Concatenates two strings 
 * @dest: input 1
 * @src: input 2
 * Return: Result of concatenation 
 */
int main(void)
{
    char dest[100];
    char src[100] = "stupid";
    int i = 0;
    int j = 0;
    int k;

    while (dest[j] != '\0'){
        j++;
    }
    
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    dest[i] = '\0';
    for (k = 0; k < j; k++)
    {
    putchar(dest[k]);
    }
    return (0);
}
