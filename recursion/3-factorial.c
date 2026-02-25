#include <stdio.h>
#include "main.h"

/**
 * factorial- factorial of number n
 * @n: the number
 * Return: factorial of given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n  * factorial(n - 1));
}
