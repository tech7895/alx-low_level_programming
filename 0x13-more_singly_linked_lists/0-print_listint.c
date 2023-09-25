#include "lists.h"

/**
 * print_listint - This function prints  all the elements of a listint_t list
 *
 * @h: the head
 * Return: num
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t num;

	if (h == NULL)
	{
		return (0);
	}

	for (num = 0; h != NULL; num++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num);
}
