#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0, k, *active_index;
	hash_node_t *list;

	if (ht == NULL)
		return;
	active_index = malloc(sizeof(unsigned long int) * ht->size);
	if (active_index == NULL)
		return;
	putchar('{');
	for (; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			active_index[j] = i;
			j++;
		}
	}
	for (k = 0; k <= j; k++)
	{
		list = ht->array[active_index[k]];
		if (k ==  j - 1)
		{
			while (list)
			{
				printf("'%s': '%s'", list->key, list->value);
				list = list->next;
				if (list)
					putchar(',');
			}
	} else
	{
		while (list)
		{
			printf("'%s': '%s', ", list->key, list->value);
			list = list->next;
		}
	}
	}
	printf("}\n");
	free(active_index);
}
