#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: Pointer to pointer to head of the list.
 * @str: The string.
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int l = 0;
	list_t *asd;
	list_t *start;

	asd = malloc(sizeof(list_t));
	if (asd == NULL)
		return (NULL);
	while (str[l])
		l++;
	asd->str = strdup(str);
	asd->len = l;

	start = *head;
	if (*head == NULL)
	{
		*head = asd;
		return (*head);
	}
	while (start->next)
	{
		start = start->next;
	}
	start->next = asd;
	return (*head);
}
