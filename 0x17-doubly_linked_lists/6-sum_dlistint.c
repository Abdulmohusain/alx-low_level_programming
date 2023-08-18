#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: the list
 * Return: sum or zero if failed
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (!head)
		return (0);
	while (head)
	{
		s++;
		head = head->next;
	}
	return (s);
}
