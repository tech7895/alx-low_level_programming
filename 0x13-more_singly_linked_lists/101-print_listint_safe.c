#include "lists.h"

/**
 * free_listp - This function frees a linked list
 * @head: the head
 *
 * Return: void
 *
 */
void free_listp(listp_t **head)
{
	listp_t *t;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((t = curr) != NULL)
		{
			curr = curr->next;
			free(t);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - This function prints a linked list
 * @head: the head
 *
 * Return: the number of nodes
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int nd = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nd);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nd++;
	}

	free_listp(&hptr);

	return (nd);
}
