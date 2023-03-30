#include "lists.h"

/**
 * add_node - Adds new node at the beginning of linked list
 * @head: pointer
 * @str: string
 *
 * Return: the number of elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * _strlen - String length
 * @str: string
 *
 * Return: string length
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
