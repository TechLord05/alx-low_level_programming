#include "main.h"

/**
 *  reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: length of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int start, end;

	start = 0;
	end = n - 1;
	while (start < end)
	{
	int temp = a[start];
	a[start] = a[end];
	a[end] = temp;
	start++;
	end--;
	}
}
