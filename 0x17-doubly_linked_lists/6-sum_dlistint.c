#include "lists.h"

/**
 * sum_dlistint - Adss up data in list.
 * @head: head pointer.
 *
 * Return: sum.
 */
int sum_dlistint(dlistint_t *head)
{
int sumz = 0;
while (head)
{
	sumz += head->n;
	head = head->next;
}
return (sumz);
}
