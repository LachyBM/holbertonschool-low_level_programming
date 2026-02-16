#include "main.h"
#include <stdio.h>

/**
 *  print_square- prints multli
 * @size: interger
 * Return: 0.
 */

void print_triangle(int size)
{
	if (size > 0)
	{
	int y = 0;

	while (size > y)
	{

	int x = 0;
	int ast = size - y;

	while (size > x)
	{
		_putchar('_');
		x++;
	}
	while (size > ast)
	{
		_putchar('#');
		ast++;
	}
	_putchar('\n');
	y++;
	ast = 0;
	}
	}
	else
	{
		_putchar('\n');
	}
}
