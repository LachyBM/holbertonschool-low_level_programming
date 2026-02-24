#include <stdio.h>
#include "main.h"

/**
 * _strspn- returns number of bytes in s which consit only of bytes from accept
 * @s:char
 * * @accept:char
 * Return:value
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i = 0;
	int loop = 0;

	while (s[i] != '\0')
	{
		int x = 0;

		while (accept[x] != '\0')
		{
			if (s[i] == accept[x])
			{
				count++;
				break;
			}
			else
			{
				x++;
			}
		}
		if (loop > count)
		{
		break;
		}

		loop++;
		i++;
	}
	return (count);
}
