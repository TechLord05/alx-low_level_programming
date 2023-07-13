#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @src: source string pointer
 * @dest: destination string pointer
 * @n: number of bytes  of source of pointer
 * Return: the copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length;

	for (length = 0; length < n && src[length] != '\0'; length++)
		dest[length] = src[length];

	for (; length < n; length++)
		dest[length] = '\0';

	return (dest);
}
