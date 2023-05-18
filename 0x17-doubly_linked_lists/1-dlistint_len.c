#include "lists.h"

/**
 * dlistint_len - Returns number of elements in linked list.
 * @h: The head.
 *
 * Return: Element count in list.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t node_num = 0;
while (h)
{
node_num++;
h = h->next;
}
return (node_num);
}
