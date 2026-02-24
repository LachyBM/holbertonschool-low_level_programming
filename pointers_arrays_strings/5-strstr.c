#include <stdio.h>
#include "main.h"

/**
 * _strstr- returns number of bytes in s which consit only of bytes from accept
 * @s:char
 * @accept:char
 * Return:value
 */

char *_strstr(char *s, char *accept)
{
	int i = 0;
	int length = 0;

	if (*accept == '\0')
		return(accept);

	while (accept[length] != '\0')
	{
		length++;
	}

	while (s[i] != '\0')
	{
		int x = 0;

		if (s[i] == accept[x])
		{
			while (accept[x] != '\0')
			{
				if (s[i] == accept[x])
				{
					i++;
					x++;
				}
				else
				{
					break;
				}

				if (x == length)
				{
					return (&s[i] - x);
				}
			}

		}
		else
		{
			i++;
		}
	}
	return (NULL);
}
