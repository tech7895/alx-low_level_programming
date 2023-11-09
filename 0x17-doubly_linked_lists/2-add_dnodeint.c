#include "lists.h"

/**
 * add_dnodeint - This function adds a new node at the beginning
 * of a dlistint_t list
 * @head: the head of the list
 * @n: the value of the element
 *
 * Return: the address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *address;
	dlistint_t *h;

	address = malloc(sizeof(dlistint_t));
	if (address == NULL)
		return (NULL);

	address->n = n;
	address->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	address->next = h;

	if (h != NULL)
		h->prev = address;

	*head = address;

	return (address);
}
