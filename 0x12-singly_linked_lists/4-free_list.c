#include "lists.h"

/**
 * free_list - This function frees a linked list
 * @head: the pointer
 *
 * Return:void
 */
void free_list(list_t *head)
{
	list_t *tmpo;

	while (head)
	{
		tmpo = head->next;
		free(head->str);
		free(head);
		head = tmpo;
	}
}
