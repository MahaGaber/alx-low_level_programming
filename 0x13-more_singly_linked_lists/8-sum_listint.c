#include"lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer of list
 *Return:integer
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

return (sum);
}


