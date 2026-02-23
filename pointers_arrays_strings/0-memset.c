#include <stdio.h>
#include "main.h"

/**
 * _memset- fills first n bytes of memory area to by s with sontant byte b
 * @s:char
 * @b:char
 * @n: unsigned int
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > i)
		{
		s[i] = b;
		i++;
		}
	return (s);
}
