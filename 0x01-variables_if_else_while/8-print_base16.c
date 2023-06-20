#include <stdio.h>
/**
 * main - prints out nubers in hexadecimal bae
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char n = '0';
	char p = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (p <= 'f')
	{
		putchar(p);
		p++;
	}
	putchar('\n');

	return (0);
}
