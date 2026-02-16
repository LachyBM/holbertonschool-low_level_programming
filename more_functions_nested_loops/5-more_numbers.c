#include "main.h"
#include <stdio.h>

/**
 * more_numbers- x10 numbers 0-14
 *
 * Return: 0.
 */

void more_numbers(void)
{
	int ch;
	int x;

	for (x = 0; x <= 9; x++)
	{
	for (ch = 0; ch <= 14; ch++)
	{
	if (ch >= 10)
	{
		_putchar((ch / 10) + '0');
	}
		_putchar((ch % 10) + '0');
	}
	_putchar ('\n');
	}
}
