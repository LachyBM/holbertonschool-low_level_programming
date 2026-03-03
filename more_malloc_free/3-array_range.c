#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *array_range- array range
 * @min: int lowest number
 * @max: int highet number
 * Return: pointer location
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *p;
	int count = 0;

	while ((min + count - 1) < max)
	{
		count++;
	}

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (count + 1));
	if (p == NULL)
		return (NULL);

	while (i < count)
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
