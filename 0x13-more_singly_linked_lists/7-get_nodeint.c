#include "lists.h"
/**
 * get_nodeint_at_index - A function that returns the nth node of
 * a listint_t linked list.
 * @head: The list.
 * @index: The index of the taget node.
 * Return: The nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int u = 0;

	while (head && u < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		u++;
	}
	return (head);

}
