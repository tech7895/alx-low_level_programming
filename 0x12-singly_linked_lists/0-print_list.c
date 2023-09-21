#include "lists.h"

/**
 * print_list - This prints all the elements of a linked list
 * @h: the pointer
 *
 * Return: st
 *
 */

size_t print_list(const list_t *h)
{
	size_t st = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		st++;
	}
	return (st);
}
