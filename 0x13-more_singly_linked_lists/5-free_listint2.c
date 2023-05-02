#include "lists.h"
/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: Pointer to the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *after;

	while (*head)
	{
		after = (*head)->next;
		free(*head);
		*head = NULL;
		*head = after;
	}
}
