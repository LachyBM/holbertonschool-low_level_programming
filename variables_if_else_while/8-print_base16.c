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

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	printf("\n");

	return (0);
}
