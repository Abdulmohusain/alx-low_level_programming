#include "lists.h"
/**
 * print_list -  function that prints all the elements of a list_t list.
 * @h: The list;
 * Return:the number of nodes
 */
size_t print_list(const list_t *h)
{
	char *str;
	size_t numNodes = 0;

	while (h != NULL)
	{
		str = h->str;
		if (str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		numNodes++;
		h = h->next;
	}
	return (numNodes);
}
