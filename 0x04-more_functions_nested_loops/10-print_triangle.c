#include "main.h"

/**
 * print_triangle - Prints a triangle to stdout
 * @size: The size of the triangle to be printed
 * Return: Void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int r, c;

		for (r = 1; r <= size; r++)
		{
			for (c = r; c < size; c++)
			{
				_putchar(' ');
			}
			for (c = 1; c <= r; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
