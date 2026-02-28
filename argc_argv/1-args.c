#include <stdio.h>

/**
 * main- print out number
 * @argc: char
 * @argv: int
 * Return: value
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
