#include <stdio.h>
#include "main.h"


/**
 * puts_half - prints second half of a string
 * @str: input
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i; 
	int len = strlen(str);

	for (i = ((len - 1) / 2 + 1); i < len; i++)

	{	putchar(*(str + i));

	}
		putchar(10);
}
