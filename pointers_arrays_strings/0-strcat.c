#include <stdio.h>
#include "main.h"

/**
 *_strcat- copy src to end of dest
 *@src: appended word
 *@dest: first word/combo
 *Return: new combo
 */

char *_strcat(char *dest, char *src)
{
	int length = 0;
	int length2 = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	while (src[length2] != '\0')
	{
		dest[length] = src[length2];
		length++;
		length2++;
	}

	return (dest);
}
