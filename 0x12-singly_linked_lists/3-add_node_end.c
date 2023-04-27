#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end
 * of a list_t list
 * @head: A pointer the head of the list
 * @str: The string to be added
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new_n, *last;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new_n);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_n->str = dup;
	new_n->len = len;
	new_n->next = NULL;

	if (*head == NULL)
		*head = new_n;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_n;
	}

	return (*head);
}
