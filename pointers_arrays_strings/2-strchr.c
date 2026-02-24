#include <stdio.h>
#include "main.h"

/**
 * _strchr- returns pointer to first occurrance of c
 * @s: char
 * @c: char
 * Return: location
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
