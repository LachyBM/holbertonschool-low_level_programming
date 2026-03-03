#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * *string_nconcat- connects two strings
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: if grid NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int x = 0;
	unsigned int size = 0;
	unsigned int size2 = 0;
	char *combo;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size] != '\0')
		size++;
	while (s2[size2] != '\0')
		size2++;
	if (n >= size2)
		n = size2;

	combo = malloc((size + n + 1)  * sizeof(char));

	if (combo == NULL)
		return (NULL);
	while (i < size)
	{
		combo[i] = s1[i];
		i++;
	}
	while (x < n)
	{
		combo[i + x] = s2[x];
		x++;
	}

	return (combo);
}
