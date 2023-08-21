#include "lists.h"
/**
 * free_dlistint -  function that frees a dlistint_t list
 * @head: the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;
	while (head->next)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
