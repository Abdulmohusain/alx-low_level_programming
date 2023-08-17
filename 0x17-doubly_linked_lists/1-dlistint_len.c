#include "lists.h"
/**
 * dlistint_len - function that returns the number
 * of elements in a linked list.
 * @h: The list
 * Return: The length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h->next)
	{
		i++;
		h = h->next;
	}
	i++;
	return (i);
}
