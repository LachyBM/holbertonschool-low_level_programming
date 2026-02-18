#include <stdio.h>
#include "main.h"

/**
 *_strncat- copy src to end of dest
 *@src: appended word
 *@dest: first word/combo
 *@n: the amount of bytes of n
 *Return: new combo
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int length2 = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	while (length2 < n)
	{
		dest[length] = src[length2];
		length++;
		length2++;
	}

	return (dest);
}
