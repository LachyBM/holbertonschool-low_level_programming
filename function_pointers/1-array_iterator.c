#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator- function print array
 * @array: array
 * @size: size of array
 * @action: action
 * Return: NOTHING
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t arr = 0;

	if (array == NULL || action == NULL)
		return;

	while (arr  < size)
	{
		action(array[arr]);
		arr++;
	}

}
