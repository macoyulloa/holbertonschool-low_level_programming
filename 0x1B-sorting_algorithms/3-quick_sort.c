#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - sorting the list
 * @array: list given
 * @size: the size of the array
 * Return - none
 */
void quick_sort(int *array, size_t size)
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
