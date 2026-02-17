#include <stdio.h>
#include "main.h"

/**
 * _puts- prints a string following a new line to stdout
 *@str: char
 */

void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		char letter = str[length];

		_putchar(letter);
		length++;
	}
	_putchar('\n');
}
