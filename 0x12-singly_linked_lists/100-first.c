#include <stdio.h>

void first_func(void)__attribute__((constructor));

/**
 * first_func - first function before main is executed
 *
 * Return: Nothing
 */
void first_func(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
