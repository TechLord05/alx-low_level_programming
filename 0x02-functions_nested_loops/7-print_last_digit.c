#include "main.h"

/**
 * print_last_digit - prints the last digit of a number to stdout
 * @n: The number to be checked
 * Return: The last digit of the number
 */

int print_last_digit(int n)
{
	int lastd = n % 10;

	if (lastd < 0)
	{
	lastd = lastd * -1;
	}
	_putchar(lastd + '0');
	return (lastd);
}
