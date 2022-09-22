#include "main.h"

/**
 * _strcmp - function that compares strings
 * @s1: first string
 * @s2: second string
 * Return: integer(0 if equal, +ve if s1 > s2, -ve if s1 < s2)
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0, count2 = 0;

	while (count == 0)
	{
		if(*(s1 + count2) == '\0' && *(s2 + count2) == '\0')

			break;
				
		count = *(s1 + coun2) - *(s2 + count2);
		count2++;
	}

	return (count);
}				
