#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabets 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void){
char c;
int i = 0;
while (i < 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar (c);
}
i++;
_putchar ('\n');
}
}
