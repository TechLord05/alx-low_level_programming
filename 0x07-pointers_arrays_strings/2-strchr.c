#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be checked.
 * @c: The character to be located.
 * Return: A pointer to the first occurence if c is found else NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
