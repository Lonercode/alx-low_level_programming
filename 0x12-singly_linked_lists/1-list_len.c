#include "lists.h"

/**
 * list_len - Number of elements in linked list
 * @h: pointer
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t nodes = 0;

	while (ptr != NULL)
	{
		nodes += 1;
		ptr = ptr->next;
	}
	return (nodes);
}
