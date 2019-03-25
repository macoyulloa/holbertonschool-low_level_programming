This repository conteins all the files and and exercises in order to learn about the linked list, which is a type of data structure.

In order to do the excersices, I used the data structure:

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
