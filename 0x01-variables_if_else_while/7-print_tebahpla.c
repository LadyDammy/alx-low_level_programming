#include <stdio.h>
/**
 * main - prints lowercase alphabets in reverse
 *
 * Description: using the main function
 * this program prints " Lowercase alphabets in reverse
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
