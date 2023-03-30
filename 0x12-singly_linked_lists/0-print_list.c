#include "lists.h"

/**
 * print_list - prints all the elements of the list_t list
 * @h: pointer
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t nodes = 0;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}

