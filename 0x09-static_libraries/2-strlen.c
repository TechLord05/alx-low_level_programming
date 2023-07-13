#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: Contains the address of the string s
 * Return: The length of string s
 */

int _strlen(char *s)
{
	int stringlength;

	stringlength = 0;
	while (s[stringlength])
		stringlength++;
	return (stringlength);
}
