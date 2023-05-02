#include "lists.h"
/**
 * delete_nodeint_at_index - A function that deletes the
 * node at index index of a listint_t linked list.
 * @head: Pointer to the list.
 * @index: Index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int o = 0;

	while (*head && o < index - 1)
	{
		o++;
		*head = (*head)->next;
	}
	if (!(*head)->next)
			return (-1);
	if (!(*head)->next->next)
	{
		free((*head)->next);
		(*head)->next = NULL;
		return (1);
	}
	if ((*head)->next->next)
	{
	       (*head)->next = (*head)->next->next;
	       return (1);
	}
	return (-1);
}
