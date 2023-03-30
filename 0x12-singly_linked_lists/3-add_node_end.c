#include "lists.h"

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: pointer
 * @str: string
 *
 * Return: address of the newly added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *cursor = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = lens(str);
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}

/**
 * lens - string length
 * @str: string
 *
 * Return: string length
 */
int lens(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
