#include"lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer of list
 * @index:integer
 *Return:the address of the nth node element, or NULL if it failed.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (NULL);

		current = current->next;
	}

return (current);
}


