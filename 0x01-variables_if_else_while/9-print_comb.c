#include  <stdio.h>
/**
 * main - prints numbers from 0-9 separated by commas and space
 *
 * Description: using the main function
 * this program "prints numbers from 0-9
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
