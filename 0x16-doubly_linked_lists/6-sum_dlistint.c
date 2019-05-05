#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - add all elements of a dlistint_t
 * @head: structure double linked list
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	size_t  sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
