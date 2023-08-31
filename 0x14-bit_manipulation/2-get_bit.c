#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checks bits
 * @index: index at which to check bit
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	result = n & divisor;
	if (result == divisor)
		return (1);

	return (0);
}
