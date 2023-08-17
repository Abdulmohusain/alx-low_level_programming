#include "list.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: the list.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	ssize_t nodes = 0b

	while (h)
	{
		printf("%d\n", 	h->n);
		h = h->next;
		nodes++;
	}
	printf("%d\n", 	h->n);
	return(nodes);
}
