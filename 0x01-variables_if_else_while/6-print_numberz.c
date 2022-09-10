#include <stdio.h>
/**
 * main - print all single digits in base 10
 *
 * Description: using the main function
 * this program prints "All single digits in base 10
 * Return: 0
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
