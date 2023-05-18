#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Generates passwords.
 * @argc: Argument count.
 * @argv: Argument pointers.
 *
 * Return: 0 (success).
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
char passcode[7], *code;
int len = strlen(argv[1]), l, hold;
code = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
hold = (len ^ 59) & 63;
passcode[0] = code[hold];

hold = 0;
for (l = 0; l < len; l++)
	hold += argv[1][l];
passcode[1] = code[(hold ^ 79) & 63];
hold = 1;
for (l = 0; l < len; l++)
	hold *= argv[1][l];
passcode[2] = code[(hold ^ 85) & 63];
hold = 0;
for (l = 0; l < len; l++)
{
if (argv[1][l] > hold)
	hold = argv[1][l];
}
srand(hold ^ 14);
passcode[3] = code[rand() & 63];
hold = 0;
for (l = 0; l < len; l++)
	hold += (argv[1][l] * argv[1][l]);
passcode[4] = code[(hold ^ 239) & 63];
for (l = 0; l < argv[1][0]; l++)
	hold = rand();
passcode[5] = code[(hold ^ 229) & 63];

passcode[6] = '\0';
printf("%s", passcode);
return (0);
}
