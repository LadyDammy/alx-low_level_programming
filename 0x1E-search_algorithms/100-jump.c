#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers
 * using the jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if value is
 * not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start = 0, end = sqrt(size);

	if (array == NULL)
                return (-1);	

	while (array[start] < value && start < size){
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		start = start + sqrt(size);
		if(end > size - 1) end = size;
	}


	for (; i = start; array[i] < value; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
