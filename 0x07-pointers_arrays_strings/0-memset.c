#include "main.h"

/** _memset - fill a memory area with a constant byte
 * @s: address to memory area
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
