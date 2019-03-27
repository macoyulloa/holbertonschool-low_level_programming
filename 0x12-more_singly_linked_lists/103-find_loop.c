#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - tudents.
 * @head: linked list.
 * Return: pointer listint_t.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (head != NULL)
	{
		next = head->next;
		head->next = prev;
		prev = head;
		head = next;
	}
	return (prev);
}
