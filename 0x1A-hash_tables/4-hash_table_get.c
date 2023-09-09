#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value
 * associated with a key.
 * @ht: the hash table
 * @key: the key
 * Return:  the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *list;

	index = hash_djb2((const unsigned char *)key) % ht->size;
	list = ht->array[index];
	if (list == NULL)
		return (NULL);
	while (list)
	{
		if (strcmp(key, list->key) == 0)
			return (list->value);
		list = list->next;
	}
	return (NULL);
}
