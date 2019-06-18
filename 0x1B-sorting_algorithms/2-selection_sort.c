#include <stdio.h>
#include "sort.h"

/**
 * index_min - selection of the min valuee
 * @array: given list
 * @index: start index
 * @size: size of the list
 * Return: min valuee
 */
unsigned int index_min(int *array, unsigned int index, size_t size)
{
unsigned int min_value = array[index], min_index = index;
unsigned int i;

for (i = min_index + 1; i < size; i++)
{
if ((unsigned int)array[i] < min_value)
{
min_index = i;
min_value = array[i];
}
}
return (min_index);
}

/**
 * swap - swap elements at the given index values
 * @array: the list
 * @first_index: first_index
 * @second_index: second_index
 * Return: int
 */
int swap(int *array, unsigned int first_index, unsigned int second_index)
{
unsigned int temp;

temp = array[first_index];
array[first_index] = array[second_index];
array[second_index] = temp;
return (1);
}

/**
 *  selection_sort - sorts a list, begining with the min value 
 *  @array: the list
 *  @size: size of the list
 *  Return: none
 */
void selection_sort(int *array, size_t size)
{
unsigned int i, index;

for (i = 0; i < size; i++)
{
index = index_min(array, i, size);
if (array[i] > array[index])
{
swap(array, i, index);
print_array(array, size);
}
}
}
