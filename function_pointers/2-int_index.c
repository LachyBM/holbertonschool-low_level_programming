#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index- function print array
 * @array: array
 * @size: size of array
 * @cmp: action
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int  arr = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (arr < size)
	{

		if (cmp(array[arr]) != 0)
			return (arr);
		arr++;
	}
	return (-1);
}
