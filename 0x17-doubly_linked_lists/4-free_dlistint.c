#include "lists.h"

/**
 * free_dlistint - function that frees a linked dlistint_t list
 * @head: the head of the dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
