#include "lists.h"

/**
 * add_node - This function adds a n node at the
 * beginning of a linked list
 * @head: the double pointer
 * @str: the string
 *
 * Return: the head or NULL
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
