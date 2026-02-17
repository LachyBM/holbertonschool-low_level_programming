#include <stdio.h>
#include "main.h"

/**
 * _strcpy- prints array of numbers
 * @dest: the amount of numbers printed
 * @src: the array
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{

	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
