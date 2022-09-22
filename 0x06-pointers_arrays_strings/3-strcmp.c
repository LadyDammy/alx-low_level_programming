#include "main.h"

/**
 * _strcmp - function that compares strings
 * @s1: first string
 * @s2: second string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)

{
	int i = 0, diff;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')

			break;
	
		else (s1[i] == '\0')
	
		diff = s2[i];

		break;

		if (s2[i] == '\0')
	
		diff = s1[i];

		break;
	
		else (s1[i] != s2[i])
	
		diff = s1[i] - s2[i];

		break;
		
		i++;
	}	
}
{	
	return (diff);
}
