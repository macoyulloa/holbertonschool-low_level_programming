#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - check the code for Holberton School students.
 * @head: linked list.
 * Return: pointer listint_t.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *actual, *prev = NULL, *next = NULL;

	actual = *head;
	while (actual != NULL)
	{
		next = actual->next;
		actual->next = prev;
		prev = actual;
		actual = next;
	}
	*head = prev;
	return (*head);
}
