#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the string str
 * Return: The uppercase string
 */

char *string_toupper(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (str[n] >= 97 && str[n] <= 122)
		{
			str[n] = str[n] - 32;
		}
		n++;
	}
	return (str);
}
