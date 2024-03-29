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
	hash_node_t *list;

	if (ht == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	index = hash_djb2((const unsigned char *)key) % ht->size;
	new_node = malloc(sizeof(hash_node_t));
	if (new_node  == NULL)
		return (0);
	if (ht->array[index] == NULL)
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
		ht->array[index] = new_node;
		return (1);
	}
	list = ht->array[index];
	while (list)
	{
		if (strcmp(key, list->key) == 0)
		{
			free(list->value);
			list->value = strdup(value);
			free(new_node);
			return (1);
		}
		list = list->next;
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
