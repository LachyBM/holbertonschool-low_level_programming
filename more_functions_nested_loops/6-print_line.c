#include "main.h"
#include <stdio.h>

/**
 *  print_line- prints multli
 * @n: interger
 * Return: 0.
 */

void print_line(int n)
{
	int x = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	while (x < n)
	{
		_putchar('_');
		x++;
	}
		_putchar('\n');
	}
}
