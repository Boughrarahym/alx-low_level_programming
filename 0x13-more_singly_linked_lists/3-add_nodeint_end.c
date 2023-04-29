#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the
 * end of a listint_t list
 * @head: pointer to the address of the head
 * @n: the integer for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *l;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
		*head = new_n;

	else
	{
		l = *head;
		while (l->next != NULL)
			l = l->next;
		l->next = new_n;
	}

	return (*head);
}
