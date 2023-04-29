#include"lists.h"

/**
 * listint_len - it get list length
 * @h: pointer of list
 *Return:the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}


