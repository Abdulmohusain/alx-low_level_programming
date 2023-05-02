#include "lists.h"
/**
 * free_listint - A function that frees a listint_t list.
 * @head: The list.
 */
void free_listint(listint_t *head)
{
	listint_t *after;

	while (head)
	{
		after = head->next;
		free(head);
		head = after;
	}
}
