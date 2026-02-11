#include <stdio.h>

/**
 * main - a-z lower case
 *
 * Return: 0.
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar ('\n');

	return (0);
}
