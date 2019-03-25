#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function to print all elments of a listint_t
 * @h: structure linked list
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	unsigned int num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
