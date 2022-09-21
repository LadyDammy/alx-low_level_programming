#include "main.h"
#include <string.h>

/**
 * _strncpy - functionthat copies a string
 * @dset: first string
 * @src: second string
 * @n: number of bytes
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
