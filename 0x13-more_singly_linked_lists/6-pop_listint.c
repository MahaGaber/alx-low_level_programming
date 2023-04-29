#include"lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer of list
 *Return: head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *next_node = NULL;
	int val = 0;

	if (*head == NULL)
		return (0);

	next_node = (*head)->next;
	val = (*head)->n;
	free(*head);

	*head = next_node;

	return (val);
}


