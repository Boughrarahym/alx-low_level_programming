#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 * list at a given position.
 * @head: pointer to the address of the head
 * @idx: index where the new node should be added
 * @n: The integer for the new node
 *
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_n, *c = *head;
	unsigned int b;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;

	if (idx == 0)
	{
		new_n->next = c;
		*head = new_n;
		return (new_n);
	}

	for (b = 0; b < (idx - 1); b++)
	{
		if (c == NULL || c->next == NULL)
			return (NULL);

		c = c->next;
	}

	new_n->next = c->next;
	c->next = new_n;

	return (new_n);
}
