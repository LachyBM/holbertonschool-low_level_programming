#include <stdio.h>
#include "main.h"

/**
 * rev_string- reverses string
 * @s:  char
 * Return: 0
 */

void rev_string(char *s)
{
	int length = 0;
	int x  = 0;
	char letter;

	while (s[length] != '\0')
	{
		length++;
	}

	while (x < length / 2)
	{

		letter = s[x];
		s[x] = s[length - 1 - x];
		s[length - 1 - x] = letter;
		x++;
	}
}
