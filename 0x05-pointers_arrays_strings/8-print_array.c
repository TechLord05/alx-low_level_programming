#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: the input array
 * @n: This is the length of the array
 */

void print_array(int *a, int n)
{
	int array_input;

	for (array_input = 0; array_input < n; array_input++)
	{
		printf("%d", a[array_input]);
		if (array_input != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
