#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value
 * in a sorted array of integers
 * @array:  pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t left, right, est;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		est = left + (((double)(right - left) / (array[right] - array[left])) *
				(value - array[left]));
		if (est < size)
		{
			printf("Value checked array[%ld] = [%d]\n", est, array[est]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", est);
			break;
		}

		if (array[est] == value)
			return (est);
		if (array[est] < value)
			left = est + 1;
		else
			right = est - 1;
	}

	return (-1);
}
