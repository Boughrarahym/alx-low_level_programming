#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a dlistint_t list
 * @head: a pointer to the head of the dlistint_t list
 * @n: the integer for the new node to contain
 *
 * Return: NULL If the function fails
 *  Otherwise the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw, *l;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		nw->prev = NULL;
		*head = nw;
		return (nw);
	}

	l = *head;
	while (l->next != NULL)
		l = l->next;
	l->next = nw;
	nw->prev = l;

	return (nw);
}
