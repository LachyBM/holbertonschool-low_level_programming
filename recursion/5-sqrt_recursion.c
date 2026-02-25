#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion- sqrt of a number
 * @n: int
 * Return: sqrt of number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}

	return (_sqrt_recursion(n - 1) / _sqrt_recursion(n - 1));
}
