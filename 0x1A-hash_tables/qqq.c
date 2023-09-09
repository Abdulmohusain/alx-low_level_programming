/**
 * add_node - function that adds a pointer of hash_node_t to
 * available_node_t list
 * @ptr: the pointer to be saved
 */
void add_node(available_node_t **head, hash_node_t *ptr)
{
	available_node_t new_node;

	new_node = malloc(sizeof(available_node_t));
	if (new_node == NULL)
		return;
	new_node->ptr = ptr;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
}
/**
 * print_rev - A fuction that print element in reverse
 * @head: head
 */
void print_rev(available_t *head)
{
	if (head = NULL)
		return;
	print_rev(head->next);
	printf();
}
