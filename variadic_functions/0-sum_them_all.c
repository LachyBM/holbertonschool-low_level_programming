#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all- sum of all numbers
 * @n: the numbers
 * Return: value
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int total = 0 ;
	unsigned int i = 0;

	va_start(ap, n);

	if (n == 0)
	return (0);

	while (i < n)
	{
		total += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return total;
}
