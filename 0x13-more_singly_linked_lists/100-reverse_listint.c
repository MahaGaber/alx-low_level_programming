#include"lists.h"

/**
 * reverse_listint - it reverse linked list
 * @head: pointer of list
 *Return:a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}


