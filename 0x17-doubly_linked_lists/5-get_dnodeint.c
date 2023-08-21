#include "lists.h"
/**
 * get_dnodeint_at_index - function that gets node at index
 * @head: the list
 * @index: the index
 * Return: node at index index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
