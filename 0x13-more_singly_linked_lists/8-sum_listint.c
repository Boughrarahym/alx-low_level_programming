#include "lists.h"

/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a listint_t linked list
 * @head: pointer to the head
 *
 * Return: 0 if the list is empty
 * Otherwise the sum of all the data
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
			head = head->next;
	}
	return (add);
}
