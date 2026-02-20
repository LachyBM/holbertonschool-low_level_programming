#include <stdio.h>
#include "main.h"

/**
 * _atoi- converts a string to an int
 * @s: char
 * Return: digit + sign
 */

int _atoi(char *s)
{
	int length = 0;
	int sign = 1;
	unsigned int dig = 0;

	while (s[length] != '\0')
	{
		if (s[length] == '+')
		{
		sign *= 1;
		}
		else if (s[length] == '-')
		{
			sign *= -1;
		}

		if ((s[length] >= '0' && s[length] <= '9'))
		{
			dig = dig * 10 + (s[length] -  '0');
		}
		else if (dig > 0)
		{
			break;
		}
		length++;
	}

	if (sign == 1)
	{
		return (dig);
	}
	else if (sign == -1)
	{
		return (-dig);
	}

	return (0);
}
