#include "lists.h"

/**
 * get_dnodeint_at_index - Find node in list.
 * @head: head pointer.
 * @index: Node of interest.
 *
 * Return: Node address or null.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index != 0; index--)
{
if (head == NULL)
	return (NULL);
head = head->next;
}
return (head);
}
