#include <stdio.h>
#include "main.h"

/**
 * print_chessboard- prints the chessbpard
 * @a: board
 * Return: value
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;

	while (i < 8)
	{
		int x = 0;

		while (x < 8)
		{

			_putchar(a[i][x]);
			x++;
		}

		_putchar('\n');
		i++;
	}
}
