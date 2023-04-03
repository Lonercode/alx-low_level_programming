#include "lists.h"

/**
 *free_listint2 - frees a linked list
 *@head: head of the list
 *
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t **x = head;

	if (x != NULL)
	{
		while (*head != NULL)
		{
			ptr = *head;
			free(ptr);
			*head = (*head)->next;
		}

		*x = NULL;
	}
}
