#include "main.h"

/**
 * *_memset - fills memory with constant byte
 * @s: memory that needs to be filled
 * @b: character to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
