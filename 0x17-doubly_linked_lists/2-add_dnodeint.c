#include "lists.h"

/**
 * add_dnodeint - function that  adds a new node at the beginning
 * of a dlistint_t list
 * @head: a pointer to the head of the dlistint_t list
 * @n: the integer for the new node to contain
 *
 * Return: NULL If the function fails
 *  Otherwise the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->prev = NULL;
	nw->next = *head;
	if (*head != NULL)
		(*head)->prev = nw;
	*head = nw;

	return (nw);
}
