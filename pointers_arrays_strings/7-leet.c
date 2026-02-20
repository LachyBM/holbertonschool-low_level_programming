#include <stdio.h>
#include "main.h"

/**
 * leet- turns into leet speak
 * @s: char
 * Return: leet speak
 */

char *leet(char *s)
{
	int loc;
	int length = 0;
	char letters[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	while (s[length] != '\0')
	{
		loc = 0;
		while (letters[loc] != '\0')
		{
			if (s[length] == letters[loc])
			{
				s[length] = num[loc];
			}
			loc++;
		}
		length++;
	}
	return (s);
}
