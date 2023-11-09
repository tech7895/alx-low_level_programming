#include "lists.h"

/**
 * add_dnodeint_end - s function adds a new node at the
 * end of a dlistint_t list
 * @head: the head of the list
 * @n: the value of the element
 *
 * Return: the address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *address;

	address = malloc(sizeof(dlistint_t));
	if (address == NULL)
		return (NULL);

	address->n = n;
	address->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = address;
	}
	else
	{
		*head = address;
	}

	address->prev = h;
	return (address);
}
