#include "function_pointers.h"

/**
 * int_index - Find the index of an integer in an array.
 * @array: The array to search.
 * @size: The size of the array.
 * @cmp: A function pointer to compare elements.
 *
 * Description: This function finds the index of an integer in the given array
 * using a function pointer for comparison.
 *
 * Return: If the integer is found, return the index; otherwise, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}

	return (-1);
}
