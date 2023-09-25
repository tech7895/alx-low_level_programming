#include "lists.h"

/**
 * get_nodeint_at_index - This function returns the nth node of
 * a listint_t linked list
 * @head: the head
 * @index: the node's desired position
 *
 * Return: the head
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
