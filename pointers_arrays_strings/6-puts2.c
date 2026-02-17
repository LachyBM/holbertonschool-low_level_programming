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

		if (length % 2 == 0)
		{
			char letter = str[length];

			_putchar(letter);
			length += 2;
		}
		else
		{
			break;
		}

	}
	_putchar('\n');
}
