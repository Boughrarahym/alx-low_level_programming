#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 * Boughrara Hym
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (b);
}
