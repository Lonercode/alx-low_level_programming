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
int n = 14;
char nums[] = "0123456789";
char lower[] = "abcdefghijklmnopqrstuvwxyz";
char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char syms[] = "!@#$^&*()";
char password;

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
password = upper[rand() % 26];
r = rand() % 4;
printf("%c", password);
}
else 
{
password = syms[rand() % 10];
r = rand() % 4;
printf("%c", password);
}
}
return (0);
}
             
