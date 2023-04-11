#include "search_algos.h"
#include <stdio.h>

/**
 * linear search algorithm - search  for values in an array of integers
 * @array - pointer to the first element 
 * @value - value to search for
 *
 * Return: If the value is not present or the array is NULL, -1.
 * 	Otherwise, the first index where the value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
