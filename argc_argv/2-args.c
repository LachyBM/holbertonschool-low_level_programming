#include <stdio.h>

/**
 *main-program
 *@argc: int
 *@argv: char
 *Return: value
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
