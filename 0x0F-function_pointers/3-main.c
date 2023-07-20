#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	p = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = p(n1, n2);

	printf("%d\n", result);

	return (0);
}
