#include "lists.h"

/**
 * listint_len - counts the number of nodes
 * @h: head of the linked list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t nodes = 0;

	while (ptr != NULL)
	{
		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}
