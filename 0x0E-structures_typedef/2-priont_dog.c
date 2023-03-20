#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Print struct
 * @d: struct dog
 *
 * Return: 0 (success)
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d.name == NULL)
		{
		printf("Name: (nil)");
		}
		else
		{
		printf("%s", d->name);
		}
		if (d.age == NULL)
		{
		printf("Age: (nil)");
		}
		else
		{
		printf("%d", d->age);
		}
		if (d.owner == NULL)
		{
		printf("Owner: (nil)");
		}
		else
		{
		printf("%s", d->owner);
		}
	}
