#include "lists.h"
/**
 * listint_len - A function that returns the number of elements in a linked listint_t list.
 * @h: The list.
 * Return: The number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
