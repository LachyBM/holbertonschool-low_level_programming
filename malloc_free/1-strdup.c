#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup- creates an array
 * @str: char
 * Return: pointer
 */

char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	copy = malloc((size + 1)  * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		copy[i] = str[i];
		i++;
	}

	return (copy);
}
