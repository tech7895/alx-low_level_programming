#include "lists.h"

/**
 * pop_listint - This function deletes the first node of
 * a list and return its data
 * @head: the head
 * Return: i
 *
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	i = (*head)->i;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (i);
}
