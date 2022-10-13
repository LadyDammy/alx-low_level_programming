#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0, c = 0;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* check if theres only one operator*/
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	s = argv[2][0];
	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = (get_op_func(argv[2]))(a, b);
	printf("%d\n", c);
	return (0);
}
