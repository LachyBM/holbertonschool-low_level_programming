#include <stdio.h>
#include "main.h"

/**
 * puts2- prints 1st and every other
 * @str: str from main
 */

void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		char letter = str[length];

		_putchar(letter);
		length = length + 2;
	}
	_putchar('\n');
}
