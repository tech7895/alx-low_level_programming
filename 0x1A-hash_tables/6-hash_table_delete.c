#include "hash_tables.h"
/**
 * hash_table_delete - This function deletes a hash table
 *
 * @ht: pointer to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int k;

	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			node = ht->array[k];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);

	free(head);
}
