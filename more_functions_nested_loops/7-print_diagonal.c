#include "main.h"
#include <stdio.h>

/**
 * print_diagonal- prints diagonal line
 * @n: interger
 * Return: 0.
 */

void print_diagonal(int n)
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

		int diag = 0;

		while (diag < x)
		{
			_putchar(' ');
			diag++;
		}
		_putchar('\\');
		_putchar('\n');
		x++;
	}
	}
}
