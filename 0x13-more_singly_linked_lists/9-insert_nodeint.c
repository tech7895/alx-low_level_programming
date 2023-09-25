#include "lists.h"

/**
 * create_new_node - This functin creates a new node
 * @n: the data
 *
 * Return: new_node
 *
 */
listint_t *create_new_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}

/**
 * insert_nodeint_at_index - This function inserts
 * a node at an index in a list
 * @head: the head
 * @idx: the index
 * @n: the data
 *
 * Return: the new_node
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *t;
	listint_t *t_old;
	listint_t *new_node;

	t = *head;
	if (head == NULL)
		return (NULL);
	new_node = create_new_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
	{
		*head = new_node;
	}
	for (i = 0; i < idx - 1 && t != NULL && idx != 0; i++)
		t = t->next;
	if (t == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = t;
	else
	{
		t_old = t->next;
		t->next = new_node;
		new_node->next = t_old;
	}

	return (new_node);
}
