#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - create an array of char
 * @size: unsigned int type
 * @c: char type
 * Return: Return pointer to array created
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc((size) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
		str[i] = '\0';
	}
	return (str);
}
