#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generate random valid passwords
 *
 * Return: 0 (success)
 */
int main(void)
{
char password;
int n = 10;
int i = 0;
int r = 0;
char nums[] = "0123456789";
char lower[] = "abcdefghijklmnopqrstuvwxyz";
char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char syms[] = "!@#$^&*()";

srand((unsigned int)(time(NULL)));
r = rand() % 4;
for ( i = 0; i < n; i++)
{
if (r == 1)
{
password = nums[rand() % 10];
r = rand() % 4;
printf("%c", password);
}
else if (r == 2)
{
password = lower[rand() % 26];
r = rand() % 4;
printf("%c", password);
}
else if (r == 3)
{
password = syms[rand() % 9];
r = rand() % 4;
printf("%c", password);
}
else
{
password = upper[rand() % 26];
r = rand() % 4;
printf("%c", password);
}
}
return (0);
}
