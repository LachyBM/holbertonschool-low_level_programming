#include <stdio.h>
#include "main.h"

/**
 * _strpbrk- finds first occurance in the string
 * @s: char
 * @accept: char
 * Return: first occurance
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int x = 0;

		while (accept[x] != '\0')
		{
			if (s[i] == accept[x])
			{
				return (&s[i]);
			}
			else
			{
				x++;
			}
		}
		i++;
	}
	return (NULL);
}
