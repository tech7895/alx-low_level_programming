#include "lists.h"

/**
 * add_node_end - This function adds a new node at
 * the end of a linked list
 * @head: the double pointer
 * @str: the string
 *
 * Return: new or  NULL
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int l = 0;

	while (str[l])
		l++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = l;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
