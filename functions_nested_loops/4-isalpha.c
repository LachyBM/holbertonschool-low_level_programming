#include "main.h"
#include <stdio.h>

/**
 * _isalpha - prints is lowercase
 * @c: interger
 * Return: 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
