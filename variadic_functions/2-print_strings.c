#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings- prints numbers with separator
 * @separator: the separator between numbers
 * @n: the numbers
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	while (i < n)
	{
		char *word = va_arg(ap, char *);

		if (word == NULL)
			word = "(nil)";

		printf("%s", word);

		if (i + 1 < n)
		printf("%s", separator);
		i++;
	}
	va_end(ap);
	printf("\n");
}
