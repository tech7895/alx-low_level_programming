#include "lists.h"

/**
 * free_listint - This function  frees a listint_t list
 *
 * @head: the head
 * Return: void
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
