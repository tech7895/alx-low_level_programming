#include "lists.h"

/**
 * print_dlistint - This function prints all the elements of a dlistint_t list
 * @h: head of the list
 *
 * Return: the number
 */
size_t print_dlistint(const dlistint_t *h)
{
	int number;

	number = 0;

	if (h == NULL)
		return (number);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
