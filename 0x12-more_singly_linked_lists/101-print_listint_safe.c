#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - function to prints a linked list.
 * @head: linked list.
 * Return: pointer listint_t.
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int num_nodes = 0;

	while (head != NULL)
	{
		head = head->next;
		num_nodes++;
	}
	return (num_nodes);
}
