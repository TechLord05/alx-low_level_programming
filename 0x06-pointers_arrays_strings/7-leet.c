#include "main.h"

/**
 * *leet - a function that encodes a string into 1337.
 * @str: points to the string str
 * Return: The string str
 */

char *leet(char *str)
{
	int m, j;
	char w[] = "aAeEoOtTlL";
	char c[] = "4433007711";

	for (m = 0; str[m] != '\0'; m++)
	{
		for (j = 0; w[j] != 0; j++)
		{
			if (str[m] == w[j])
			{
				str[m] = c[j];
			}
		}
	}
	return (str);
}
