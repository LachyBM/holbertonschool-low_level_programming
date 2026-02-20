#include <stdio.h>
#include "main.h"

/**
 *_strncpy- copy str
 *@dest: char
 *@src: char
 *@n: Int
 *Return: length of array
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length = 0;

	while (length < n && src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}

	while (length < n)
	{
		dest[length] = '\0';
		length++;
	}
	return (dest);
}
