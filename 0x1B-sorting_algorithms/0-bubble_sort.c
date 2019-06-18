#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 *  bubble_sort - printing a sorted list
 *
 *  @array: the list
 *  @size: size of the list
 *  Return: none
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j, temp;

for (i = 0; i < size; i++)
{
for (j = 0; j < (size - i - 1); j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
}
}
}
