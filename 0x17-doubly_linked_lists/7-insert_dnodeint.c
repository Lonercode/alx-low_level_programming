#include "lists.h"

/**
 * insert_dnodeint_at_index - New node inserted in precise location in list.
 * @h: head pointer.
 * @idx: Location for new node.
 * @n: Integer
 *
 * Return: Address or Null.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *hold = *h, *new_node;
if (idx == 0)
	return (add_dnodeint(h, n));

for (; idx != 1; idx--)
{
hold = hold->next;
if (hold == NULL)
	return (NULL);
}

if (hold->next == NULL)
	return (add_dnodeint_end(h, n));
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
	return (NULL);
new_node->n = n;
new_node->prev = hold;
new_node->next = hold->next;
hold->next->prev = new_node;
hold->next = new_node;
return (new_node);
}
