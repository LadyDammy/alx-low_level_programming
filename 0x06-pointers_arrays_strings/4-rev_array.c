#include "main.h"

/**
 * reverse_array - reversing an array
 * @a: name of array
 * @n: an element of array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, first, last, keep, counts;
	
	counts = n / 2;
	first = 0;
	last = n - 1;
	
for (i = 0; i < counts; i++)
{	
	keep = a[first];
	a[first] = a[last];
	a[last] = keep;
	first++;
	last--;
	
}
}
