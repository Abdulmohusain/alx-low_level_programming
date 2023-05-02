#include "lists.h"
/**
 * add_nodeint_end - A function that adds a new node at the end of a listint_t list.
 * @head: The list.
 * @n: The nuber to be added to the list.
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *start = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (start->next)
	{
		start = start->next;
	}
	start->next = new;
	return (*head);

}
