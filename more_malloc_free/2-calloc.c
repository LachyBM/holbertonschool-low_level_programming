#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc- grid
 * @nmemb: int width of grid
 * @size: int highet of grid
 * Return: grid with locations
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	count = nmemb * size;
	p = malloc(count);
	if (p == NULL)
		return (NULL);
	while (i < count)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
