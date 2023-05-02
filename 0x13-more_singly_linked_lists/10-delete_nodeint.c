#include"lists.h"

/**
 * delete_nodeint_at_index - adds a new node at the end of a list_t list.
 * @head: pointer of list
 * @index:integer
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (current->next != NULL)
	{
		if (i == index - 1)
		{
			temp = current->next;
			current->next = current->next->next;
			free(temp);
			return (1);
		}
		current = current->next;
		i++;
	}
return (-1);
}


