#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 if success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
