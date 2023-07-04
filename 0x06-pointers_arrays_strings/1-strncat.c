#include <stdio.h>

/**
 * *_strncat - a function that concatenates two strings
 * @src: The string to be appended.
 * @dest: The string to be modified.
 * @n: the number of bytes for string src
 * Return: Concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}


	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
