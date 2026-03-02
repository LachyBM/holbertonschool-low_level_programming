#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat- array
 * @s1: char
 * @s2: char
 * Return: value
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int size = 0;
	int size2 = 0;
	int total = 0;
	char *combo;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (s1[size] != '\0')
	{
		size++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	total = size + size2;

	combo = malloc((total + 1)  * sizeof(char));
	if (combo == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		combo[i] = s1[i];
		i++;

	}
	i = 0;
	while (size < total)
	{
		combo[size] = s2[i];
		size++;
		i++;
	}

	return (combo);
}
