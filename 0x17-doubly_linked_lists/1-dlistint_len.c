#include "lists.h"

/**
 * dlistint_len - s function returns the number
 * of elements in a double linked list
 * @h: head of the list
 *
 * Return: the number
 */
size_t dlistint_len(const dlistint_t *h)
{
	int number;

	number = 0;

	if (h == NULL)
		return (number);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}

	return (number);
}
