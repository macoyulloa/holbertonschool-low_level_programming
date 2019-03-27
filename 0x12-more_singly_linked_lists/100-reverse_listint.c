#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - check the code for Holberton School students.
 * @head: linked list.
 * Return: pointer listint_t.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while ((*head) != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	return (prev);
}
