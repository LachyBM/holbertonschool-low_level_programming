#include "main.h"
#include <stdio.h>

/**
 *  print_square- prints multli
 * @size: interger
 * Return: 0.
 */

void print_square(int size)
{
	if (size > 0)
	{
	int y = 0;

	while (size > y)
	{

	int x = 0;

	while (size > x)
	{
		_putchar('#');
		x++;
	}
	_putchar('\n');
	y++;
	}
	}
	else
	{
		_putchar('\n');
	}
}
