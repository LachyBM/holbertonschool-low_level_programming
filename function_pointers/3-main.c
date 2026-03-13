#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main-main
 * @argc: arg count
 * @argv: arg value
 * Return:0 if pass
 */

int main(int argc, char *argv[])
{
	int x, y;
	int (*oper)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oper = get_op_func(argv[2]);
	if (oper == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	if (y == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", oper(x, y));
	return (0);
}
