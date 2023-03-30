#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *hd;

	if (head != NULL)
	{
		while (head != NULL)
		{
			hd = head;
			head = head->next;
			free(hd->str);
			free(hd);
		}
	}
}
