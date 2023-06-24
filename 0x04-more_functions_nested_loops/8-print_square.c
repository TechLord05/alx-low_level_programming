#include "main.h"

/**
 * print_square - Prints a square shape to stdout
 * @size: Size of the square
 * Return: Void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, j;

		for (m = 0; m < size; m++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
