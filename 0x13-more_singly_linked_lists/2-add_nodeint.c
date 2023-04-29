#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 *               of a listint_t list.
 * @head: pointer to the address of the
 * head
 * @n: the integer for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = *head;

	*head = new_n;

	return (new_n);
}
