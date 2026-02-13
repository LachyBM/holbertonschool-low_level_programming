#include "main.h"
#include <stdio.h>

/**
 * _islower - prints is lowercase
 * @c: interger
 * Return: 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
