#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to the address of the head
 * @index: thhe index of the node to be deleted
 *
 * Return: 1 if deletion succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *p, *c = *head;
	unsigned int b;

	if (c == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}

	for (b = 0; b < (index - 1); b++)
	{
		if (c->next == NULL)
			return (-1);

		c = c->next;
	}

	p = c->next;
	c->next = p->next;
	free(p);
	return (1);
}
