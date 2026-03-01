#include <stdio.h>
#include "main.h"

/**
 * helper- sqrt of a number
 * @n: int
 * @check: int
 * Return: sqrt of number
 */

int helper(int n, int check)
{
	if (check * check == n)
		return (check);
	if (check * check > n)
		return (-1);
	return (helper(n, check + 1));
}

/**
 * _sqrt_recursion- sqrt
 * @n: int
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (helper(n, 1));
}
