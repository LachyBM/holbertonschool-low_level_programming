#include <stdio.h>

/**
 * main - a-z lower case
 *
 * Return: 0.
 */

int main(void)
{
	int x = 0;
	char ch;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
