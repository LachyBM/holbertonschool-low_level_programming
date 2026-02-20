#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses array
 * @a: int
 * @n: int
 * Return: reverse array
 */

void reverse_array(int *a, int n)
{
	int length  = 0;
	int temp;

	while (length < n / 2)
	{

		temp = a[length];
		a[length] = a[n - 1 - length];
		a[n - 1 - length] = temp;
		length++;
	}
}
