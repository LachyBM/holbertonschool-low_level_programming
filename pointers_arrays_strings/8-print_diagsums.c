#include <stdio.h>
#include "main.h"

/**
 * print_diagsums- prints diagsums
 * @a: int
 * @size: int
 * Return: value
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum = 0;
	int sum1 = 0;

	while (i < size)
	{
		sum = sum + a[i * size + i];
		sum1 = sum1 + a[i * size + (size - 1 - i)];
		i++;
	}

	printf("%d, %i \n", sum, sum1);
}
