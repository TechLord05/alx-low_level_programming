#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: the compared string
 */

int _strcmp(char *s1, char *s2)
{
	int count, compare;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}
	compare = s1[count] - s2[count];
	return (compare);
}
