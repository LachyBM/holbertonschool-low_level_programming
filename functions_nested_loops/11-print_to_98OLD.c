#include "main.h"
#include <stdio.h>

/**
 * print_to_98- is lowercase
 * @n: interger
 * Return: 0.
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		while(n < 0)
		{
			int absn = -n;
			_putchar('-');
			_putchar((absn / 10) + '0');
                	_putchar((absn % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
		n++;

	}
	while (n >= 100)
	{
		_putchar((n / 100) + '0');
		_putchar((n / 10 % 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
		n--;
	}
	while (n > 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
		n--;
	}
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');
}
