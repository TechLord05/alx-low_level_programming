#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 if success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
