#include <stdio.h>
#include "main.h"

/**
 *_strcmp- compares two strings
 *@s1:char
 *@s2:char
 *Return:dif
 */

int _strcmp(char *s1, char *s2)
{
	int length = 0;

	while (s1[length] != '\0' && s2[length] != '\0')
	{
		if (s1[length] - s2[length])
		{
		return (s1[length] - s2[length]);
		}
		length++;
	}

	return (s1[length] - s2[length]);
}
