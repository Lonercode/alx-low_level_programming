#include "lists.h"

/**
 * free_dlistint - Would free a linked list.
 * @head: head pointer.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *hold;
while (head)
{
hold = head->next;
free(head);
head = hold;
}
}
