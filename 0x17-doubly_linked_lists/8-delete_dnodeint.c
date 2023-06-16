#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node from
 *  a dlistint_t at a given index.
 * @head: a pointer to the head of the dlistint_t
 * @index: the index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (t == NULL)
			return (-1);
		t = t->next;
	}

	if (t == *head)
	{
		*head = t->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		t->prev->next = t->next;
		if (t->next != NULL)
			t->next->prev = t->prev;
	}

	free(t);
	return (1);
}
