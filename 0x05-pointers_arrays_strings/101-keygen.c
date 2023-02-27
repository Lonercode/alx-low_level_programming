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
int i = 0;
int r = 0;
srand((unsigned int)(time(NULL)));
char nums[] = "0123456789";
char lower[] = "abcdefghijklmnopqrstuvwxyz";
char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char syms[] = "!@#$^&*()";
char password[n];
r = rand() % 4;
for ( i = 0; i < n; i++)
{
if (r == 1)
{
password[i] = nums[rand() % 10];
r = rand() % 4;
printf("%c", password[i]);
}
else if (r == 2)
{
password[i] = lower[rand() % 26];
r = rand() % 4;
printf("%c", password[i]);
}
else if (r == 3)
{
password[i] = syms[rand() % 9];
r = rand() % 4;
printf("%c", password[i]);
}
else
{
password[i] = upper[rand() % 26];
r = rand() % 4;
printf("%c", password[i]);
}
}
return (0);
}
