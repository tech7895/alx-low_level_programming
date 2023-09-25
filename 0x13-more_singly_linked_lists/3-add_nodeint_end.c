#include "lists.h"
/**
 * add_nodeint_end - This function  adds a i node
 * at the end of a listint_t list
 *
 * @head: the head of the list
 * @n: the i data
 *
 * Return: the head
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *temp;

	(void)temp;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
	{
		return (NULL);
	}

	i->n = n;
	i->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = i;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = i;
	}

	return (*head);
}
