#include "lists.h"
/**
 * add_dnodeint_end -  function that adds a new node
 * at the end of a list.
 * @head: the list
 * @n: integer data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *new = malloc(sizeof(dlistint_t));

	h = *head;
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	} else
	{
		while (h->next)
		{
			h = h->next;
		}
		h->next = new;
		new->prev = *head;
	}
	return (new);
}
