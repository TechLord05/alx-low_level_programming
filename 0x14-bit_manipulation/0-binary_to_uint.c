#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to string
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k;
	int i;

	k = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		k <<= 1;

		if (b[i] == '1')
			k += 1;
	}

	return (k);
}
