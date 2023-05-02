#include "lists.h"
/**
 * pop_listint - A function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: Pointer to the list.
 * Return: The head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;

	if (*head == NULL)
		return (0);
	*head = tmp->next;
	free(tmp);
	return ((*head)->n);
}
