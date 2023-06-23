#include "main.h"

/**
 * print_line - prints a striaght line to stdout
 * @n: Number of time the line is to be printed
 * Return: Void
 */

void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		int m;

		for (m = 1; m <= n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
