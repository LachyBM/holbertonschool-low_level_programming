#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers- prints numbers with separator
 * @separator: the separator between numbers
 * @n: the numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	while (i < n)
	{
		printf("%d", va_arg(ap, int));

		if (i + 1 < n)
		printf("%s", separator);
		i++;
	}
	va_end(ap);
	printf("\n");
}
