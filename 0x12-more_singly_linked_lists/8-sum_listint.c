#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - adds the number of one linked list.
 * @head: linked list data structure.
 * Return: the sum of all data.
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	node = head;
	if (node == NULL)
		return (0);
	while (node != NULL)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}
