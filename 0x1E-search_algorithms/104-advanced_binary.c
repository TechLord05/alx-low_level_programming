#include "search_algos.h"


/**
 * binary_search_recursive - recursively searches for a
 * value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @left: starting index of the search range
 * @right: ending index of the search range
 * @value: the value to search for
 * Return: the index where value is located, or -1 if value is not present
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (left > right || array == NULL)
		return (-1);

	if (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");

		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] == value && (mid == left || array[mid - 1] < value))
			return (mid);
		else if (array[mid] < value)
			return (binary_search_recursive(array, mid + 1, right, value));
		else
			return (binary_search_recursive(array, left, mid, value));
	}
	return (-1);

}


/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (binary_search_recursive(array, 0, size - 1, value));
}
