#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - a-z lower case alphabet 10 times
 *
 * Return: 0.
 */

void print_alphabet_x10(void)
{
	char ch;
	int x;

	for (x = 0; x <= 9; x++)
	{	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar ('\n');
	}
}
