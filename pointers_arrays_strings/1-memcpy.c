#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copy mem to requested location
 * @dest: char
 * @src: char
 * @n: unsigned int n
 * Return: copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (n > i)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
