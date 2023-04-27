#include"lists.h"

/**
 * print_list - it copy values
 * @h: pointer of list
 *Return:the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}

	return (i);
}


