#include <stdio.h>
#include <stdarg.h>

/**
 * print_all- prints numbers with separator
 * @format: the format
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	int i = 0;

	va_start(ap, format);
	while (format && format[i])
	{
		s = NULL;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				s = "";
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				s = "";
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				s = "";
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				s = "";
				break;
		}
		if (s != NULL && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
