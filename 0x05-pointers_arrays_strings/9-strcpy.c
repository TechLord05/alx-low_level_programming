#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Return: character (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}
