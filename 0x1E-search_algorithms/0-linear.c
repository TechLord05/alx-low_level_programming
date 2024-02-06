#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of
 * integers using the Linear search algorithm.
 * @array: the array to search.
 * @size: the number of elements in the array.
 * @value: the value to search for.
 *
 * Return: the index of found value or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
