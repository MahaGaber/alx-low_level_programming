#include"lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer of list
 * @idx: integer index
 * @n:integer
 *Return:the address of the new element, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current = *head;
	unsigned int i;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	for (i = 0; i < idx - 1; i++)
	{
		if (current->next == NULL)
			return (NULL);

		current = current->next;
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}


