#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i = 0, j = 0, k = 0, *index;

	if (ht == NULL)
	return;

	index = malloc(sizeof(unsigned long int) * ht->size);
	if (index == NULL)
	{
		printf("malloc failed\n");
		return;
	}

	for (; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			index[j] = i;
			j++;
		}
	}
	printf("{");
	for (k = 0; k < j; k++)
	{
		current = ht->array[index[k]];
		while (current)
		{
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			if (current)
				printf(", ");
	}
		if (k != j - 1)
			printf(", ");
	}
	printf("}\n");
	free(index);
}

