#include "main.h"
/**
 * main - Printing alphabets
 *
 * Return: 0(success)
 */
int main(void)
{
char c;
for(c = 'a', c <= 'z'; c++)
{
print_alphabet(c);
}
print_alphabet('\n');
return (0);
}
