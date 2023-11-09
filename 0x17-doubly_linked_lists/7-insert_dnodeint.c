#include "lists.h"

/**
 * insert_dnodeint_at_index - This function inserts a
 * new node at a given position
 * @h: the head of the list
 * @idx: the index
 * @n: the value of the address node
 *
 * Return: the address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *address;
	dlistint_t *head;
	unsigned int i;

	address = NULL;
	if (idx == 0)
		address = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					address = add_dnodeint_end(h, n);
				else
				{
					address = malloc(sizeof(dlistint_t));
					if (address != NULL)
					{
						address->n = n;
						address->next = head->next;
						address->prev = head;
						head->next->prev = address;
						head->next = address;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (address);
}
