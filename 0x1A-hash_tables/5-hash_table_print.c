#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *list;

	if (ht == NULL)
		return;

	putchar('{');
	for (; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			list = ht->array[i];
			while (list)
			{
				printf("'%s': '%s'", list->key, list->value);
				if (list->next != NULL)
				{
					putchar(',');
				}
				list = list->next;
			}

		}
	}
	printf("}\n");
}
