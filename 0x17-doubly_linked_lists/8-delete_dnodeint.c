#include "lists.h"

/**
 * delete_dnodeint_at_index - Node deleted from particular location in list.
 * @head: head pointer.
 * @index: Particular location we talked about; aka index.
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *hold = *head;
if (*head == NULL)
	return (-1);

for (; index != 0; index--)
{
if (hold == NULL)
	return (-1);

hold = hold->next;
}

if (hold == *head)
{
*head = hold->next;
if (*head != NULL)
	(*head)->prev = NULL;
}

else
{
hold->prev->next = hold->next;
if (hold->next != NULL)
	hold->next->prev = hold->prev;
}

free(hold);
return (1);
}
