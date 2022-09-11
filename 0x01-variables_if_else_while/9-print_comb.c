#include <stdio.h>
/**
 * main - print numbers 0-9 separated by commans and spaces between them
 *
 * Description: usind the main function
 * this program prints "0-9 with spaces and commas between them
 * Return: 0
 */
int main(void)
{
int c;
for (c = 48; c <= 57; c++)
{
	putchar(c);
if (c != 57)
{
	putchar(',');

	putchar(' ');
}
}
putchar('\n');
return (0);
}
