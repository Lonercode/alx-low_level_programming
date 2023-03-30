#include "lists.h"
/**
 * print_list - Prints all the elements of the list_t list
 * @h: list pointer
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
size_t nodes = 0;
const list_t *ptr = h;

while (ptr != NULL)
{
if (ptr->str != NULL)
{
printf("[%d] %s\n", ptr->len, ptr->str);
}
else
{
printf("[0] (nil)\n");
}
nodes++;
ptr = ptr->next;
}
return (nodes);
}
