#include "search_algos.h"
/**
 * linear_search - return the first element
 * @array: list of data
 * @size: the size of the array
 * @value: value to check
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;

for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
