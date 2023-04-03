#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list
 *@head: head of the linked list
 *
 *Return: the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *del;
	int stuff;

	if (*head == NULL)
		return (0);

	del = *head;
	stuff = del->n;
	free(del);

	*head = (*head)->next;
	return (stuff);
}
