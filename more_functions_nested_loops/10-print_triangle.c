#include "main.h"
#include <stdio.h>

/**
 *  print_triangle- prints multli
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

	while (size - (y + 1) > x)
	{
		_putchar(' ');
		x++;
	}
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
