#include "main.h"
#include <string.h>

/**
 * _strncat - function to append strings with more bytes
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
