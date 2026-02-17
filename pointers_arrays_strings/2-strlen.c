#include <stdio.h>
#include "main.h"

/**
 *_strlen- length of string
 *@s: char
 *Return: length of array
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
