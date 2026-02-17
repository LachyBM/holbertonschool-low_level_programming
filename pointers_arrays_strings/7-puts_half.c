#include <stdio.h>
#include "main.h"

/**
 * puts_half- prints 2nd half
 * @str: str
 */

void puts_half(char *str)
{
	int length = 0;
	int start = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	start = (length + 1) / 2;

	while (start < length)
	{
		char letter = str[start];

		_putchar(letter);
		start++;
	}
	_putchar('\n');
}

