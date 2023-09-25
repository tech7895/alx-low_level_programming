#include "lists.h"

/**
 * free_listp2 - This function frees a linked list
 * @head: the head
 *
 * Return: void
 *
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *cr;

	if (head != NULL)
	{
		cr = *head;
		while ((temp = cr) != NULL)
		{
			cr = cr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - This functio frees a linked list
 * @h: the head
 *
 * Return: the size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nd = 0;
	listp_t *hptr, *nw, *add;
	listint_t *cr;

	hptr = NULL;
	while (*h != NULL)
	{
		nw = malloc(sizeof(listp_t));

		if (nw == NULL)
			exit(98);

		nw->p = (void *)*h;
		nw->next = hptr;
		hptr = nw;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nd);
			}
		}

		cr = *h;
		*h = (*h)->next;
		free(cr);
		nd++;
	}

	*h = NULL;
	free_listp2(&hptr);

	return (nd);
}
