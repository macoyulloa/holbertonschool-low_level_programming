#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function to return the number of elments of a list_t
 * @h: structure linked list
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	unsigned int s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);
}
