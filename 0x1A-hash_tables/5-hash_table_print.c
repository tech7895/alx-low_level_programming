#include "hash_tables.h"

/**
 * hash_table_print - This function prints a hash table
 * @ht: pointer to the hash table to print
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int k;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[k];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
