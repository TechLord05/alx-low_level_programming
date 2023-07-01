#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: contains the address of string s
 * Return: Void
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	while (length--)
		_putchar(s[length]);
	_putchar('\n');
}
