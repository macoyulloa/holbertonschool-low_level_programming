#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function to print the len of a dlistint_t
 * @h: head structure double linked list
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t  s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);
}
