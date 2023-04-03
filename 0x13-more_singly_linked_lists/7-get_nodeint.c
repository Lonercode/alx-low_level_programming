#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of the linked ist
 * @index: index of the node
 *
 * Return: the address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = NULL;
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i <= index)
		{
			if (i == index)
			{
				ptr = head;
				break;
			}
			head = head->next;
			i++;
		}
		else
			return (NULL);
	}
	return (ptr);
}

