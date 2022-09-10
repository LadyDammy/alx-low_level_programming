#include<stdio.h>
/**
 * main - print lower case, followed by uppercase alphabets
 *
 * Description: using the main function
 * this program prints " Lower case, followed by upper case alphabets
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
