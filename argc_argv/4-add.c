#include <stdio.h>
#include <stdlib.h>

/**
 * is_num- checks if value is a number before entering
 * @str: char
 * Return: value
 */

int is_num(char *str)
{
	int i = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main- main
 * @argc: int
 * @argv: char
 * Return: value
 */

int main(int argc, char **argv)
{
	int x = 0;
	int i = 1;

	while (i < argc)
	{

		if (!is_num(argv[i]))
	{
		printf("Error\n");
		return (1);
	}

		x = x + atoi(argv[i]);
		i++;
	}

	printf("%d\n", x);

	return (0);
}
