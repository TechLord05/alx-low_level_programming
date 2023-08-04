#include "main.h"
/**
 * _thepower - calculate (base and power)
 * @base: base of the exponet
 * @powr: power of the exponet
 * Return: value of base and power
 */
unsigned long int _thepower(unsigned int base, unsigned int powr)
{
	unsigned long int numb;
	unsigned int j;

	numb = 1;
	for (j = 1; j <= powr; j++)
		numb *= base;
	return (numb);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int devp, returs;
	char flags;

	flags = 0;
	devp = _thepower(2, sizeof(unsigned long int) * 8 - 1);

	while (devp != 0)
	{
		returs = n & devp;
		if (returs == devp)
		{
			flags = 1;
			_putchar('1');

		}
		else if (flags == 1 || devp == 1)
		{
			_putchar('0');
		}
		devp >>= 1;
	}
}
