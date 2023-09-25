#include "lists.h"

/**
 * add_nodeint - This function adds a new node at the
 * beginning of a listint_t list
 *
 * @head: the head
 * @n: the new int
 *
 * Return: the head
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *noden;

	if (head == NULL)
	{
		return (NULL);
	}

	noden = malloc(sizeof(listint_t));
	if (noden == NULL)
		return (NULL);
	if (*head == NULL)
		noden->next = NULL;
	else
		noden->next = *head;
	noden->n = n;
	*head = noden;

	return (*head);
}
