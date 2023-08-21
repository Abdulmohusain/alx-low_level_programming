#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 * @h: pointer to the list
 * @idx: index to insert at
 * @n: integer data
 * Return: the address of the new node,
 * or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *b, *w = malloc(sizeof(dlistint_t));
	unsigned int q = 0;

	if (!w)
		return (NULL);
	w->n = n;
	b = *h;
	while (b)
	{
		if (q == idx - 1)
		{
			b->next->prev = w;
			w->next = b->next;
			b->next = w;
			w->prev = b;
			return (w);
		}
		q++;
		b = b->next;
	}
	return (NULL);
}
