#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * of a listint_t list
 * @head: pointer to the address of the
 * head of the listint_t list
 * Return: The data (n) of the head node, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int b;

	if (*head == NULL)
		return (0);

	temp = *head;
	b = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (b);
}
