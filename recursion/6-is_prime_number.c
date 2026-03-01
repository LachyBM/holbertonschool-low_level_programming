#include <stdio.h>
#include "main.h"

/**
 * helper- helps check for prime
 * @n: int
 * @check: int
 * Return: primer
 */

int helper(int n, int check)
{
	if (check * check > n)
		return (1);
	if (n % check == 0)
		return (0);
	return (helper(n, check + 1));
}

/**
 * is_prime_number- check if number is prime
 * @n: int  number to check
 * Return: if prime or not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helper(n, 2));
}
