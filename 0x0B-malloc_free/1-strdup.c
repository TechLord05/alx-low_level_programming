#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */
int _strlen(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{

	}
	return (j);
}

/**
 * *_strdup - function to return pointer to string
 * @str: pointer to string array input
 * Return: pointer to string created
 */

char *_strdup(char *str)
{
	char *ptr;
	int size;
	int m;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));

	m = 0;
	while (m < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr[m] = str[m];
		m++;
	}
	return (ptr);
}
