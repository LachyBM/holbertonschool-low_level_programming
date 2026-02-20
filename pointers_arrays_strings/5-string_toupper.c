#include <stdio.h>
#include "main.h"

/**
 * string_toupper - turns string to upper
 * @s: char
 * Return: uppercase of s
 */

char *string_toupper(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		if (s[length] >= 'a' && s[length] <= 'z')
		{
		s[length] = s[length] - 32;
		}
		length++;
	}
	return (s);
}
