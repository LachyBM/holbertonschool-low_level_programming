#include "main.h"
#include <stdio.h>

/**
 * print_last_digit- prints is lowercase
 * @n: interger
 * Return: 0.
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = -last;
	}
	_putchar(last + '0');
	return (last);
}
