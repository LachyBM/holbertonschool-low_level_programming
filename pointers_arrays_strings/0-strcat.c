#include <stdio.h>
#include "main.h"

/**
 *
 * 
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
