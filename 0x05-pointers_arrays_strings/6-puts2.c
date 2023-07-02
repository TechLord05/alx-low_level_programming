#include "main.h"

/**
 * puts2 -  a function that prints every other character of a string, starting with the first character
 * @s: points to the varible s
 * Return: nothing
 */

void puts2(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
		l++;
	}
	_putchar('\n');
}
