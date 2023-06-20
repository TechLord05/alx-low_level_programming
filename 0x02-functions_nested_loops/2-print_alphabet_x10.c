#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times to stdout
 *
 * Return:void
 *
 */

void print_alphabet_x10(void)
{
	char bt;
	int k;

	k = 0;

	while (k < 10)
	{
	for (bt = 'a'; bt <= 'z'; bt++)
	{
	_putchar(bt);
	}
	_putchar('\n');
	k++;
	}
}
