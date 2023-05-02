#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the list.
 * @str: the string.
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int length = 0;
	list_t *qwe = malloc(sizeof(list_t));

	while (str[length])
		length++;
	if (qwe == NULL)
		return (NULL);
	qwe->str = strdup(str);
	qwe->len = length;
	qwe->next = *head;
	*head = qwe;
	return (*head);
}
