#include "lists.h"

/**
 * listint_len - This funcion  returns the number of elements
 * in a linked listint_t list
 * @h: the head
 *
 * Return: num
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t num;

	if (h == NULL)
	{
		return (0);
	}

	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}

	return (num);
}
