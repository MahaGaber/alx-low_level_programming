#include"lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: pointer of list
 * @n:integer
 *Return:the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current = *head;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;

if (current)
{
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
}
else
	*head = new_node;

	return (new_node);
}


