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
	hash_node_t *new_node;

	if (ht == NULL)
		return (0);
	if (key == NULL || value == NULL)
		return (0);
	index = hash_djb2((const unsigned char *)key) % ht->size;
	if (ht->array[index] == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
		ht->array[index] = new_node;
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
