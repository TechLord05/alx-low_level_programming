#include "main.h"

/**
 * *cap_string - a function that capitalizes all words of a string
 * @str: points to a string str
 * Return: Capitalized (str)
 */

char *cap_string(char *str)
{
	int m, j;
	char chr[] = {32, 9, ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n'};

	for (m = 0; str[m] != '\0'; m++)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
	for (j = 0; chr[j] != '\0'; j++)
	{
		if (chr[j] == str[m] && (str[m + 1] >= 97 && str[m + 1] <= 122))
		{
			str[m + 1] = str[m + 1] - 32;
		}
	}

	}
	return (str);
}
