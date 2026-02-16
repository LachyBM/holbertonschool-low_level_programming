#include <stdio.h>
#include "main.h"

/**
 * swap_int- swap the values of 2 ints
 *@a: interger
 *@b: interger
 * return: 0
 */

void swap_int(int *a, int *b)
{
	int holder = *a;
	*a = *b;
	*b = holder;
}
