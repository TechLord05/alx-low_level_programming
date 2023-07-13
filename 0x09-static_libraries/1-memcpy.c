#include "main.h"

/**
 * _memcpy - function that copies n bytes from memory area src
 * @n: number of bytes to copy
 * @src: memory area to copy from
 * @dest: destination of copied bytes
 * Return: a pointer to dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
