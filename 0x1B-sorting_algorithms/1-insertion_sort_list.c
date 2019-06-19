#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - print a sort list
 * @list: doubly linked list
 * Return: none
 */
void insertion_sort_list(listint_t **list)
{
listint_t *insert;

if ((*list) == NULL || (*list)->next == NULL)
return;

insert = (*list)->next;
while (insert)
{
while (insert->prev && insert->n < insert->prev->n)
{
insert->prev->next = insert->next;
if (insert->next)
insert->next->prev = insert->prev;
insert->next = insert->prev;
insert->prev = insert->prev->prev;
insert->next->prev = insert;
print_list(*list);
}
insert = insert->next;
}
}
