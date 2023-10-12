#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node in
 * a dlistint_t list at a given position.
 * @h: a pointer to the head of the dlistint_t list
 * @idx: the position to insert the new node
 * @n: the integer for the new node to contain
 *
 * Return: NULL if the function fails
 * Otherwise the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t = *h, *nw;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		t = t->next;
		if (t == NULL)
			return (NULL);
	}

	if (t->next == NULL)
		return (add_dnodeint_end(h, n));

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->prev = t;
	nw->next = t->next;
	t->next->prev = nw;
	t->next = nw;

	return (nw);
}
