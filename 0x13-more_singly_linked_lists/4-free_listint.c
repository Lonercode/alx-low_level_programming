#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of the linked list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *x;

	while (head != NULL)
	{
		x = head;
		head = head->next;
		free(x);
	}
}
