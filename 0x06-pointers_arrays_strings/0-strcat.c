#include "main.h"

/**
 * _strcat - function that concatenates two string
 * @src: second string
 * @dest: first string
 *
 * Return: resulting string
 */

char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[deest_len++] = src[index];

	return(dest);
}

