#include"lists.h"

/**
 * free_listint2 - it free list
 * @head: pointer of list
 *Return:
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next_node;

	if (!head)
		return;

	current = *head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*head = NULL;
}


