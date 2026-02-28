#include <stdio.h>
#include <stdlib.h>

/**
 * main- print out number
 * @argc: char
 * @argv: int
 * Return: value
 */

int main(int argc, char **argv)
{
	int mul;
	int x;
	int y;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;
	printf("%d\n", mul);

	return (0);
}
