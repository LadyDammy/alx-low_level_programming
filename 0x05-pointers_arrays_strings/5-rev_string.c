#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: input
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;
	int tmp;
	int len = strlen(s);
for (i = 0; i < len / 2; i++)
{
	tmp = *(s + i);
	*(s + i) = *(s + len - i - 1);
	*(s + len - i - 1) = tmp;
}
}
