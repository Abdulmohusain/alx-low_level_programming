#include "lists.h"
/**
 * print_listint - A function that prints all the elements of a listint_t list.
 * @h: The list.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int numNodes = 0;

	while (h)
	{
		numNodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (numNodes);
}
