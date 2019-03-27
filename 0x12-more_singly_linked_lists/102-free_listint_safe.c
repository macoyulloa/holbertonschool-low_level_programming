#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - function to prints a linked list.
 * @head: linked list.
 * Return: pointer listint_t.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num_nodes = 0;

	while ((*h) != NULL)
	{
		(*h) = (*h)->next;
		num_nodes++;
	}
	return (num_nodes);
}
