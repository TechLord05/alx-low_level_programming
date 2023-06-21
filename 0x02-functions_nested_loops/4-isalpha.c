#include "main.h"

/**
 * _isalpha - checks if alphabetic character is lowercase or upper case
 * @c: character that is to be checked
 * Return: 1 if character is lowercase || uppercase and 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	return (0);
}
