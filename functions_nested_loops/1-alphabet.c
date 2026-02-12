#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - a-z lower case alphabet
 *
 * Return: 0.
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');
}
