#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_item;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (strcmp(key, "") == 0 || strcmp(value, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_item = malloc(sizeof(hash_node_t));
	if (new_item == NULL)
		return (0);
	new_item->key = strdup(key);
	new_item->value = strdup(value);
	if (ht->array[index] == NULL)
	{
		new_item->next = NULL;
		ht->array[index] = new_item;
	}
	else
	{
		new_item->next = ht->array[index];
		ht->array[index] = new_item;
	}
	return (1);
}
