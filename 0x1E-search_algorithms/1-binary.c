#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer yo the first element
 * @size: number the elements of the array
 * @value: value to search
 * Return: the value
 */
int binary_search(int *array, size_t size, int value)
{
size_t left = 0;
size_t right = size - 1;
int mitad = 0;

if (!array)
{
return (-1);
}

while (left <= right)
{
mitad = (left + right) / 2;
if (array[mitad] == value)
return (mitad);
if (array[mitad] < value)
left = mitad + 1;
else
right = mitad - 1;
}

return (-1);
}
