#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers- is lowercase
 * Return: 0.
 */

void print_most_numbers(void)
{
	char num;

	for (num = 0; num <= 9; num++)
	{
	if ((num == 2) || (num == 4))
	{
	num++;
	}
		_putchar(num + '0');
	}
	_putchar ('\n');
}
