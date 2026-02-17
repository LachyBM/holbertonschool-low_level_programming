#include <stdio.h>
#include "main.h"

/**
 *print_rev- prints the strin in reverse
 *@s: char
 *Return: length of array
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length > 0)
	{
		char letter = s[length];

		_putchar(letter);
		length--;
	}
	_putchar('\n');
}
