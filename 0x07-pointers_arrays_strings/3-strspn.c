#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The prefix substring to be measured
 * Return: The number of btyes in s which consist only bytes 
 * from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int nob = 0;
	int length;

	while (*s)
	{
		for (length = 0; accept[length]; length++)
		{
			if (*s == accept[length])
			{
				nob ++;
				break;
			}
			else if (accept[length + 1] == '\0')
				return (nob);
		}
		s++;
	}
	return (nob);
}
