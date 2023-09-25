#include "lists.h"

/**
 * reverse_listint - This function reverses a listint_t linked list
 * @head: the head
 *
 * Return: head or NULL
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *t;
	listint_t *new_t;

	if (head == NULL || *head == NULL)
		return (NULL);
	t = *head;
	*head = t->next;
	t->next = NULL;

	while (*head != NULL)
	{
		new_t = (*head)->next;
		(*head)->next = t;
		t = *head;
		if (new_t == NULL)
			return (*head);
		*head = new_t;
	}
	if (*head == NULL)
	{
		*head = t;
		return (*head);
	}

	return (NULL);
}
