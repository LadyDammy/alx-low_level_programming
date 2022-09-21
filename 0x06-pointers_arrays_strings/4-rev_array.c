#include "main.h"

/**
 * reverse_array - reversing an array
 * @a: name of array
 * @n: an element of array
 */

void reverse_array(int *a, int n)
{
	int *p, i, tmp, s;
	
	p = a;
	
for (i = 0; i < n, i++)
	p++;
for (s = 0; s < n / 2; s++);
{	
	tmp = a[s];
	a[s] = *p;
	*p = tmp;
	p--;
}	
