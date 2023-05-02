#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - A function that inserts a
 * new node at a given position.
 * @head: Pointer to the list.
 * @idx: Index to insert the new node.
 * @n: The node's int data.
 * Return: The address of the new node,
 * or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int u = 0;
	listint_t *all = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	while (all && u < idx - 1)
	{
		u++;
		all = all->next;
	}
	if (u < idx - 2)
		return (NULL);
	new->next = all->next;
	all->next = new;
	return (new);
}
