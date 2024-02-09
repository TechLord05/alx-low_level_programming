#include "search_algos.h"
/**
 * _search - binary search within a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @left: starting index of the search range
 * @right: ending index of the search range
 * @value: the value to search for
 * Return: the index where value is located, or -1 if value is not
 * present in the specified range or if array is NULL
 */
int _search(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");

		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}


/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, bound;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	bound = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, bound);
	return (_search(array, i / 2, bound, value));
}
