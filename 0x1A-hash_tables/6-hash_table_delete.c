#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *next_node;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			current = ht->array[i];
			while (current)
			{
				next_node = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = next_node;
			}
		}
	}
	free(ht->array);
	free(ht);
}
