#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitlize all words in a string
 * @s: char
 * Return: captiliza
 */

char *cap_string(char *s)
{
	int length = 0;
	int cap = 1;

	while (s[length] != '\0')
	{
		if (cap == 1 && s[length] >= 'a' && s[length] <= 'z')
		{
			s[length] = s[length] - 32;
		}

		if (s[length] == ' ' || s[length] == '\t' || s[length] == '\n'
	|| s[length] == ',' || s[length] == ';' || s[length] == '.'
	|| s[length] == '!' || s[length] == '?' || s[length] == '"'
	|| s[length] == '(' || s[length] == ')' || s[length] == '{'
	|| s[length] == '}')
		{
			cap = 1;
		}
		else
		{
			cap = 0;
		}
		length++;
	}
	return (s);
}
