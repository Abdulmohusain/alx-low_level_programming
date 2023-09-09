#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_list;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	putchar('{');
	for (; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			current_list = ht->array[i];
			while (current_list)
			{
				printf(" '%s': '%s'", current_list->key, current_list->value);
				if (current_list->next != NULL)
					printf(", ");
				current_list = current_list->next;
			}
		}
	}
	printf("}\n");
}
