#include <stdio.h>
/**
 * main - print lowercase alphabets excluding e and q
 *
 * Description: using the main function
 * this program prints " Lowerscase alphabets that are not e and q
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && != 'q')
{
	putchar(ch);
}
}
putchar('\n';)
return (0);
}
