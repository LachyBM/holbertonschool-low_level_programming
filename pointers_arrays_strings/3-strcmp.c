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
	int dif = 0;

	while (s1[length] != '\0' && s2[length] != '\0')
	{
		dif = (int)s1[length] - (int)s2[length];
		length++;
	}

	return (dif);
}
