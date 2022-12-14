#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string to be checked
 * @accept: string to be searched
 *
 * Return: pointer to the byte in s that matches or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + 1);
	}
	return (0);
}
