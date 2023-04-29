#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a listint_t linked list
 * @h: pointer to the head of the listint_t list
 *
 * Return: the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}

	return (b);
}
