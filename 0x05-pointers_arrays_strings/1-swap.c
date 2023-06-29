#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: store the address of variable b
 * @b: stores the address of variable a
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}
