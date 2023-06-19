#include <stdio.h>
/**
 * main - prints the alphabets except e and q in lower case
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char k = 'a';

	while (k <= 'z')
	{
		if (k != 'e' && k != 'q')
		{
		putchar(k);
		}
		k++;
	}
	putchar('\n');
	return (0);
}
