#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array- creates an array
 * @size: int
 * @c: char
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);

}
