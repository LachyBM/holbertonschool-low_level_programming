#include <stdio.h>
#include "main.h"

/**
 * print_array- prints array of numbers
 * @n: the amount of numbers printed
 * @a: the array
 */

void print_array(int *a, int n)
{
	int start = 0;

	while (start < n)
	{
	if (start != (n - 1))
	{
		printf("%d, ", a[start]);
	}
	else
	{
		printf("%d", a[start]);
	}
	start++;
	}
	printf("\n");
}
