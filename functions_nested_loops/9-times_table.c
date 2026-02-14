#include "main.h"
#include <stdio.h>

/**
 *jack_bauer- print abs
 *
 * Return: 0.
 */

void times_table(void)
{
	int n1 = 0;

	while (n1 <= 9)
	{
		int n2 = 0;

		while (n2 <= 9)
		{
		int multi = n1 * n2;
		
		if (multi >= 10)
		{
			_putchar((multi / 10) + '0');
			_putchar((multi % 10) + '0');
		}
		else
		{
			_putchar(' ');
			_putchar( multi + '0');
		}
		if (n2 < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		n2++;
		}
	_putchar('\n');
	n1++;
	}
}
