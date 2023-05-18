#include "lists.h"

/**
 * print_dlistint - Prints all the elements
 * @h: The head.
 *
 * Return: List node count.
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t node_num = 0;

while (h)
{
node_num++;
printf("%d\n", h->n);
h = h->next;
}
return (node_num);
}
