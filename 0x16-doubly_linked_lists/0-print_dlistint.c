#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function to print all elments of a dlistint_t
 * @h: structure double linked list
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t  s = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
