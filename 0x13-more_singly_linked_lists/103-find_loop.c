#include "lists.h"

/**
 * find_listint_loop - This function finds the loop in a linked list
 * @head: the head
 *
 * Return: the address
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pt;
	listint_t *prev;

	pt = head;
	prev = head;

	while (head && pt && pt->next)
	{
		head = head->next;
		pt = pt->next->next;

		if (head == pt)
		{
			head = prev;
			prev =  pt;
			while (1)
			{
				pt = prev;
				while (pt->next != head && pt->next != prev)
				{
					pt = pt->next;
				}
				if (pt->next == head)
					break;

				head = head->next;
			}
			return (pt->next);
		}
	}


	return (NULL);
}
